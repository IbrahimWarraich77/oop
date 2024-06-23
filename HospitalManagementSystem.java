import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class HospitalManagementSystem {

    public static void main(String[] args) {
        Employee employee = new Employee();
        HospitalRooms hospitalRooms = new HospitalRooms();
        Scanner scanner = new Scanner(System.in);
        int choice;

        while (true) {
           
            heading();

            System.out.println("\n\n\t\t\t\t1) Add Doctor");
            System.out.println("\n\n\t\t\t\t2) Search Doctor");
            System.out.println("\n\n\t\t\t\t3) Delete Doctor");
            System.out.println("\n\n\t\t\t\t4) Show Doctors");
            System.out.println("\n\n\t\t\t\t5) Book Appointment");
            System.out.println("\n\n\t\t\t\t6) Check Appointments");
            System.out.println("\n\n\t\t\t\t7) Checkup");
            System.out.println("\n\n\t\t\t\t8) Discharge Patient");
            System.out.println("\n\n\t\t\t\t9) Check Rooms");
            System.out.println("\n\n\t\t\t\t10) Exit");
            System.out.print("\n\n\t\t\t\tEnter your choice: ");
            choice = scanner.nextInt();

            switch (choice) {
                case 1:
                    heading();
                    employee.addEmployee();
                    pause();
                    break;
                case 2:
                    heading();
                    System.out.print("\n\n\t\t\t\tEnter ID: ");
                    int id = scanner.nextInt();
                    employee.searchEmployee(id);
                    pause();
                    break;
                case 3:
                    heading();
                    System.out.print("\n\n\t\t\t\tEnter ID: ");
                    int deleteId = scanner.nextInt();
                    employee.deleteEmployee(deleteId);
                    pause();
                    break;
                case 4:
                    heading();
                    employee.showEmployees();
                    pause();
                    break;
                case 5:
                    heading();
                    employee.appointment();
                    pause();
                    break;
                case 6:
                    heading();
                    employee.checkAppointments();
                    pause();
                    break;
                case 7:
                    heading();
                    hospitalRooms.checkup();
                    pause();
                    break;
                case 8:
                    heading();
                    System.out.print("\n\n\t\t\t\tEnter Token No: ");
                    int token = scanner.nextInt();
                    hospitalRooms.dischargePatient(token, employee);
                    pause();
                    break;
                case 9:
                    heading();
                    hospitalRooms.checkRooms();
                    pause();
                    break;
                case 10:
                    System.out.println("\n\n\t\t\t\tThanks for Using Our Program...");
                    System.out.println("\n\n\t\t\t\tExiting...");
                    System.exit(0);
                    break;
                default:
                    System.out.println("\n\n\t\t\t\tPlease Enter Valid Option: ");
                    break;
            }
        }
    }

    public static void heading() {
        System.out.println("\n\n\t\t\t\t=======================================================================");
        System.out.println("\t\t\t\t=======================================================================");
        System.out.println("\t\t\t\t\t\tWELCOME TO HOSPITAL MANAGEMENT SYSTEM");
        System.out.println("\t\t\t\t=======================================================================");
        System.out.println("\t\t\t\t=======================================================================");
    }

    public static void pause() {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Press Enter to continue...");
        scanner.nextLine();
    }
}

class EmployeeVariables {
    protected int id;
    protected String employeename;
    protected String specialist;
    protected double salary;
    protected double balance;
    protected int fees;

    // Appointment data variables
    protected int tokenNO;
    protected String patientName;
    protected int agePatient;
    protected String checkUp_Date;

    public EmployeeVariables() {
        this.balance = 0;
    }
}

class Employee extends EmployeeVariables {
    private List<Doctor> doctors = new ArrayList<>();
    private List<Appointment> appointments = new ArrayList<>();

    public void addEmployee() {
        Scanner scanner = new Scanner(System.in);
        System.out.print("\n\n\t\t\t\tEnter Doctor ID: ");
        id = scanner.nextInt();
        scanner.nextLine(); 
        System.out.print("\n\n\t\t\t\tEnter Doctor Name: ");
        employeename = scanner.nextLine();

        String[] speciaLIST = {"Eye", "Skin", "ENT", "Dentist", "Neurologist", "Psychologist", "Cardiologist", "General"};
        for (int i = 0; i < speciaLIST.length; i++) {
            System.out.println("\n\n\t\t\t\t" + i + ". " + speciaLIST[i] + " Specialist");
        }
        System.out.print("\n\n\t\t\t\tEnter Specialization: ");
        int c = scanner.nextInt();
        specialist = speciaLIST[c];

        System.out.print("\n\n\t\t\t\tEnter Doctor Salary: ");
        salary = scanner.nextDouble();

        doctors.add(new Doctor(id, employeename, specialist, salary));
        System.out.println("\n\n\t\t\t\tDoctor Added Successfully!\n\n");
    }

    public void searchEmployee(int searchID) {
        for (Doctor doctor : doctors) {
            if (doctor.id == searchID) {
                System.out.println("\n\n\t\t\t\tDoctor ID: " + doctor.id);
                System.out.println("\n\n\t\t\t\tDoctor Name: " + doctor.name);
                System.out.println("\n\n\t\t\t\tDoctor Specialization: " + doctor.specialist);
                System.out.println("\n\n\t\t\t\tDoctor Salary: " + doctor.salary);
                System.out.println("\n\n");
                return;
            }
        }
        System.out.println("\n\n\t\t\t\tNo Data to Search!\n\n");
    }

    public void deleteEmployee(int iD) {
        for (Doctor doctor : doctors) {
            if (doctor.id == iD) {
                doctors.remove(doctor);
                System.out.println("\n\n\t\t\t\tData Deleted Successfully\n\n");
                return;
            }
        }
        System.out.println("\n\n\t\t\t\tData Not Found...\n\n");
    }

    public void showEmployees() {
        if (doctors.isEmpty()) {
            System.out.println("No Doctor Added Yet, Please Add Doctors First!");
        } else {
            for (Doctor doctor : doctors) {
                System.out.println("\n\n\t\t\t\tDoctor ID: " + doctor.id);
                System.out.println("\n\n\t\t\t\tDoctor Name: " + doctor.name);
                System.out.println("\n\n\t\t\t\tDoctor Specialization: " + doctor.specialist);
                System.out.println("\n\n\t\t\t\tDoctor Salary: " + doctor.salary);
                System.out.println("\n\n");
            }
        }
    }

    public void appointment() {
        Scanner scanner = new Scanner(System.in);
        String[] speciaLIST = {"Eye", "Skin", "ENT", "Dentist", "Neurologist", "Psychologist", "Cardiologist", "General"};
        for (int i = 0; i < speciaLIST.length; i++) {
            System.out.println("\n\n\t\t\t\t" + i + ") " + speciaLIST[i] + " Specialist");
        }
        System.out.print("\n\n\t\t\t\tSelect Specialist: ");
        int c = scanner.nextInt();
        scanner.nextLine();  // Consume newline
        String storeSP = speciaLIST[c];

        for (Doctor doctor : doctors) {
            if (doctor.specialist.equals(storeSP)) {
                System.out.println("\n\n\t\t\t\t" + storeSP + " Specialist " + doctor.name);
                appointmentPatientData(doctor);
                return;
            }
        }
        System.out.println("\n\n\t\t\t\tDoctor Not Available");
    }

    public void checkAppointments() {
        if (appointments.isEmpty()) {
            System.out.println("\n\n\t\t\t\tNo Appointments Made Yet!");
        } else {
            System.out.println("\n\n\t\t\t\t" + "NO.\tToken No\tPatient Name\tAge\tCheckUp Date");
            for (Appointment appointment : appointments) {
                System.out.println("\n\t\t\t\t" + appointment.tokenNO + "\t" + appointment.tokenNO + "\t" + appointment.patientName + "\t" + appointment.agePatient + "\t" + appointment.checkUp_Date);
            }
        }
    }

    private void appointmentPatientData(Doctor doctor) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("\n\n\t\t\t\tEnter Token No: ");
        tokenNO = scanner.nextInt();
        scanner.nextLine();  
        System.out.print("\n\n\t\t\t\tEnter Patient Name: ");
        patientName = scanner.nextLine();
        System.out.print("\n\n\t\t\t\tEnter Patient Age: ");
        agePatient = scanner.nextInt();
        scanner.nextLine();  
        System.out.print("\n\n\t\t\t\tEnter CheckUp Date: ");
        checkUp_Date = scanner.nextLine();

        appointments.add(new Appointment(tokenNO, patientName, agePatient, checkUp_Date));
        
       
        doctor.balance += 500; 
    }
    
    public void dischargePatient(int token) {
        for (Appointment appointment : appointments) {
            if (appointment.tokenNO == token) {
                appointments.remove(appointment);
                System.out.println("\n\n\t\t\t\tPatient with Token No " + token + " Discharged Successfully!\n\n");
                return;
            }
        }
        System.out.println("\n\n\t\t\t\tPatient with Token No " + token + " Not Found...\n\n");
    }

    
}

class Doctor {
    int id;
    String name;
    String specialist;
    double salary;
    double balance;

    Doctor(int id, String name, String specialist, double salary) {
        this.id = id;
        this.name = name;
        this.specialist = specialist;
        this.salary = salary;
        this.balance = 0;
    }
}

class Appointment {
    int tokenNO;
    String patientName;
    int agePatient;
    String checkUp_Date;

    Appointment(int tokenNO, String patientName, int agePatient, String checkUp_Date) {
        this.tokenNO = tokenNO;
        this.patientName = patientName;
        this.agePatient = agePatient;
        this.checkUp_Date = checkUp_Date;
    }
}

class HospitalRooms {
    private List<Room> rooms = new ArrayList<>();

    public HospitalRooms() {
        
        rooms.add(new Room(101, false));
        rooms.add(new Room(102, true));
        rooms.add(new Room(103, false));
    }

    public void checkup() {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter patient name: ");
        String patientName = scanner.nextLine();
        System.out.println("Enter patient disease: ");
        String patientDisease = scanner.nextLine();
        System.out.println("Checkup done for " + patientName + " with disease " + patientDisease);
    }

    public void dischargePatient(int token, Employee employee) {
        employee.dischargePatient(token);
    }

    public void checkRooms() {
        for (Room room : rooms) {
            String status = room.isOccupied() ? "Occupied" : "Available";
            System.out.println("\n\n\t\t\t\tRoom No: " + room.getRoomNumber() + " - " + status);
        }
    }
}

class Room {
    private int roomNumber;
    private boolean occupied;

    public Room(int roomNumber, boolean occupied) {
        this.roomNumber = roomNumber;
        this.occupied = occupied;
    }

    public int getRoomNumber() {
        return roomNumber;
    }

    public boolean isOccupied() {
        return occupied;
    }
}

