import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.ArrayList;
import java.util.List;

public class HospitalManagementSystemGUI {

    private static Employee employee = new Employee();
    private static HospitalRooms hospitalRooms = new HospitalRooms();

    public static void main(String[] args) {
        JFrame frame = new JFrame("Hospital Management System");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(600, 400);
        
        JPanel panel = new JPanel();
        panel.setLayout(new GridLayout(5, 2));

        JButton addDoctorButton = new JButton("Add Doctor");
        JButton searchDoctorButton = new JButton("Search Doctor");
        JButton deleteDoctorButton = new JButton("Delete Doctor");
        JButton showDoctorsButton = new JButton("Show Doctors");
        JButton bookAppointmentButton = new JButton("Book Appointment");
        JButton checkAppointmentsButton = new JButton("Check Appointments");
        JButton checkupButton = new JButton("Checkup");
        JButton dischargePatientButton = new JButton("Discharge Patient");
        JButton checkRoomsButton = new JButton("Check Rooms");
        JButton exitButton = new JButton("Exit");

        addDoctorButton.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                addDoctorDialog();
            }
        });

        searchDoctorButton.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                searchDoctorDialog();
            }
        });

        deleteDoctorButton.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                deleteDoctorDialog();
            }
        });

        showDoctorsButton.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                showDoctorsDialog();
            }
        });

        bookAppointmentButton.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                bookAppointmentDialog();
            }
        });

        checkAppointmentsButton.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                checkAppointmentsDialog();
            }
        });

        checkupButton.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                checkupDialog();
            }
        });

        dischargePatientButton.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                dischargePatientDialog();
            }
        });

        checkRoomsButton.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                checkRoomsDialog();
            }
        });

        exitButton.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                System.exit(0);
            }
        });

        panel.add(addDoctorButton);
        panel.add(searchDoctorButton);
        panel.add(deleteDoctorButton);
        panel.add(showDoctorsButton);
        panel.add(bookAppointmentButton);
        panel.add(checkAppointmentsButton);
        panel.add(checkupButton);
        panel.add(dischargePatientButton);
        panel.add(checkRoomsButton);
        panel.add(exitButton);

        frame.getContentPane().add(BorderLayout.CENTER, panel);
        frame.setVisible(true);
    }

    private static void addDoctorDialog() {
        JDialog dialog = new JDialog();
        dialog.setTitle("Add Doctor");
        dialog.setSize(400, 300);
        dialog.setLayout(new GridLayout(6, 2));

        JLabel idLabel = new JLabel("Doctor ID: ");
        JTextField idField = new JTextField();
        JLabel nameLabel = new JLabel("Doctor Name: ");
        JTextField nameField = new JTextField();
        JLabel specializationLabel = new JLabel("Specialization: ");
        JComboBox<String> specializationComboBox = new JComboBox<>(new String[]{"Eye", "Skin", "ENT", "Dentist", "Neurologist", "Psychologist", "Cardiologist", "General"});
        JLabel salaryLabel = new JLabel("Salary: ");
        JTextField salaryField = new JTextField();

        JButton addButton = new JButton("Add Doctor");
        addButton.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                int id = Integer.parseInt(idField.getText());
                String name = nameField.getText();
                String specialization = (String) specializationComboBox.getSelectedItem();
                double salary = Double.parseDouble(salaryField.getText());
                employee.addEmployee(id, name, specialization, salary);
                JOptionPane.showMessageDialog(dialog, "Doctor added successfully!");
                dialog.dispose();
            }
        });

        dialog.add(idLabel);
        dialog.add(idField);
        dialog.add(nameLabel);
        dialog.add(nameField);
        dialog.add(specializationLabel);
        dialog.add(specializationComboBox);
        dialog.add(salaryLabel);
        dialog.add(salaryField);
        dialog.add(new JLabel());
        dialog.add(addButton);

        dialog.setVisible(true);
    }

    private static void searchDoctorDialog() {
        JDialog dialog = new JDialog();
        dialog.setTitle("Search Doctor");
        dialog.setSize(300, 200);
        dialog.setLayout(new GridLayout(3, 2));

        JLabel idLabel = new JLabel("Enter Doctor ID: ");
        JTextField idField = new JTextField();
        JButton searchButton = new JButton("Search");

        searchButton.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                int id = Integer.parseInt(idField.getText());
                String result = employee.searchEmployee(id);
                JOptionPane.showMessageDialog(dialog, result);
                dialog.dispose();
            }
        });

        dialog.add(idLabel);
        dialog.add(idField);
        dialog.add(new JLabel());
        dialog.add(searchButton);

        dialog.setVisible(true);
    }

    private static void deleteDoctorDialog() {
        JDialog dialog = new JDialog();
        dialog.setTitle("Delete Doctor");
        dialog.setSize(300, 200);
        dialog.setLayout(new GridLayout(3, 2));

        JLabel idLabel = new JLabel("Enter Doctor ID: ");
        JTextField idField = new JTextField();
        JButton deleteButton = new JButton("Delete");

        deleteButton.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                int id = Integer.parseInt(idField.getText());
                String result = employee.deleteEmployee(id);
                JOptionPane.showMessageDialog(dialog, result);
                dialog.dispose();
            }
        });

        dialog.add(idLabel);
        dialog.add(idField);
        dialog.add(new JLabel());
        dialog.add(deleteButton);

        dialog.setVisible(true);
    }

    private static void showDoctorsDialog() {
        JDialog dialog = new JDialog();
        dialog.setTitle("Show Doctors");
        dialog.setSize(400, 300);
        dialog.setLayout(new BorderLayout());

        JTextArea textArea = new JTextArea();
        textArea.setText(employee.showEmployees());
        textArea.setEditable(false);

        dialog.add(new JScrollPane(textArea), BorderLayout.CENTER);

        dialog.setVisible(true);
    }

    private static void bookAppointmentDialog() {
        JDialog dialog = new JDialog();
        dialog.setTitle("Book Appointment");
        dialog.setSize(400, 300);
        dialog.setLayout(new GridLayout(6, 2));

        JLabel specializationLabel = new JLabel("Specialization: ");
        JComboBox<String> specializationComboBox = new JComboBox<>(new String[]{"Eye", "Skin", "ENT", "Dentist", "Neurologist", "Psychologist", "Cardiologist", "General"});
        JLabel tokenLabel = new JLabel("Token No: ");
        JTextField tokenField = new JTextField();
        JLabel patientNameLabel = new JLabel("Patient Name: ");
        JTextField patientNameField = new JTextField();
        JLabel patientAgeLabel = new JLabel("Patient Age: ");
        JTextField patientAgeField = new JTextField();
        JLabel checkupDateLabel = new JLabel("Checkup Date: ");
        JTextField checkupDateField = new JTextField();

        JButton bookButton = new JButton("Book Appointment");
        bookButton.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                String specialization = (String) specializationComboBox.getSelectedItem();
                int token = Integer.parseInt(tokenField.getText());
                String patientName = patientNameField.getText();
                int patientAge = Integer.parseInt(patientAgeField.getText());
                String checkupDate = checkupDateField.getText();
                String result = employee.bookAppointment(specialization, token, patientName, patientAge, checkupDate);
                JOptionPane.showMessageDialog(dialog, result);
                dialog.dispose();
            }
        });

        dialog.add(specializationLabel);
        dialog.add(specializationComboBox);
        dialog.add(tokenLabel);
        dialog.add(tokenField);
        dialog.add(patientNameLabel);
        dialog.add(patientNameField);
        dialog.add(patientAgeLabel);
        dialog.add(patientAgeField);
        dialog.add(checkupDateLabel);
        dialog.add(checkupDateField);
        dialog.add(new JLabel());
        dialog.add(bookButton);

        dialog.setVisible(true);
    }

    private static void checkAppointmentsDialog() {
        JDialog dialog = new JDialog();
        dialog.setTitle("Check Appointments");
        dialog.setSize(400, 300);
        dialog.setLayout(new BorderLayout());

        JTextArea textArea = new JTextArea();
        textArea.setText(employee.checkAppointments());
        textArea.setEditable(false);

        dialog.add(new JScrollPane(textArea), BorderLayout.CENTER);

        dialog.setVisible(true);
    }

    private static void checkupDialog() {
        JDialog dialog = new JDialog();
        dialog.setTitle("Checkup");
        dialog.setSize(400, 300);
        dialog.setLayout(new GridLayout(3, 2));

        JLabel patientNameLabel = new JLabel("Patient Name: ");
        JTextField patientNameField = new JTextField();
        JLabel patientDiseaseLabel = new JLabel("Patient Disease: ");
        JTextField patientDiseaseField = new JTextField();

        JButton checkupButton = new JButton("Checkup");
        checkupButton.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                String patientName = patientNameField.getText();
                String patientDisease = patientDiseaseField.getText();
                hospitalRooms.checkup(patientName, patientDisease);
                JOptionPane.showMessageDialog(dialog, "Checkup done for " + patientName + " with disease " + patientDisease);
                dialog.dispose();
            }
        });

        dialog.add(patientNameLabel);
        dialog.add(patientNameField);
        dialog.add(patientDiseaseLabel);
        dialog.add(patientDiseaseField);
        dialog.add(new JLabel());
        dialog.add(checkupButton);

        dialog.setVisible(true);
    }

    private static void dischargePatientDialog() {
        JDialog dialog = new JDialog();
        dialog.setTitle("Discharge Patient");
        dialog.setSize(300, 200);
        dialog.setLayout(new GridLayout(3, 2));

        JLabel tokenLabel = new JLabel("Enter Token No: ");
        JTextField tokenField = new JTextField();
        JButton dischargeButton = new JButton("Discharge");

        dischargeButton.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                int token = Integer.parseInt(tokenField.getText());
                String result = hospitalRooms.dischargePatient(token, employee);
                JOptionPane.showMessageDialog(dialog, result);
                dialog.dispose();
            }
        });

        dialog.add(tokenLabel);
        dialog.add(tokenField);
        dialog.add(new JLabel());
        dialog.add(dischargeButton);

        dialog.setVisible(true);
    }

    private static void checkRoomsDialog() {
        JDialog dialog = new JDialog();
        dialog.setTitle("Check Rooms");
        dialog.setSize(400, 300);
        dialog.setLayout(new BorderLayout());

        JTextArea textArea = new JTextArea();
        textArea.setText(hospitalRooms.checkRooms());
        textArea.setEditable(false);

        dialog.add(new JScrollPane(textArea), BorderLayout.CENTER);

        dialog.setVisible(true);
    }
}

class EmployeeVariables {
    protected int id;
    protected String employeename;
    protected String specialist;
    protected double salary;
    protected double balance;
    protected int fees;

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

    public void addEmployee(int id, String name, String specialization, double salary) {
        doctors.add(new Doctor(id, name, specialization, salary));
    }

    public String searchEmployee(int searchID) {
        for (Doctor doctor : doctors) {
            if (doctor.id == searchID) {
                return "Doctor ID: " + doctor.id + "\nDoctor Name: " + doctor.name + "\nDoctor Specialization: " + doctor.specialist + "\nDoctor Salary: " + doctor.salary;
            }
        }
        return "No Data to Search!";
    }

    public String deleteEmployee(int iD) {
        for (Doctor doctor : doctors) {
            if (doctor.id == iD) {
                doctors.remove(doctor);
                return "Data Deleted Successfully";
            }
        }
        return "Data Not Found...";
    }

    public String showEmployees() {
        StringBuilder result = new StringBuilder();
        if (doctors.isEmpty()) {
            return "No Doctor Added Yet, Please Add Doctors First!";
        } else {
            for (Doctor doctor : doctors) {
                result.append("Doctor ID: ").append(doctor.id).append("\nDoctor Name: ").append(doctor.name).append("\nDoctor Specialization: ").append(doctor.specialist).append("\nDoctor Salary: ").append(doctor.salary).append("\n\n");
            }
        }
        return result.toString();
    }

    public String bookAppointment(String specialization, int token, String patientName, int patientAge, String checkupDate) {
        for (Doctor doctor : doctors) {
            if (doctor.specialist.equals(specialization)) {
                appointments.add(new Appointment(token, patientName, patientAge, checkupDate));
                doctor.balance += 500;
                return "Appointment booked successfully!";
            }
        }
        return "Doctor Not Available";
    }

    public String checkAppointments() {
        StringBuilder result = new StringBuilder();
        if (appointments.isEmpty()) {
            return "No Appointments Made Yet!";
        } else {
            result.append("NO.\tToken No\tPatient Name\tAge\tCheckUp Date\n");
            for (Appointment appointment : appointments) {
                result.append(appointment.tokenNO).append("\t").append(appointment.tokenNO).append("\t").append(appointment.patientName).append("\t").append(appointment.agePatient).append("\t").append(appointment.checkUp_Date).append("\n");
            }
        }
        return result.toString();
    }

    public void dischargePatient(int token) {
        appointments.removeIf(appointment -> appointment.tokenNO == token);
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

    public void checkup(String patientName, String patientDisease) {
        // Placeholder for actual checkup logic
    }

    public String dischargePatient(int token, Employee employee) {
        employee.dischargePatient(token);
        return "Patient with Token No " + token + " Discharged Successfully!";
    }

    public String checkRooms() {
        StringBuilder result = new StringBuilder();
        for (Room room : rooms) {
            String status = room.isOccupied() ? "Occupied" : "Available";
            result.append("Room No: ").append(room.getRoomNumber()).append(" - ").append(status).append("\n");
        }
        return result.toString();
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
