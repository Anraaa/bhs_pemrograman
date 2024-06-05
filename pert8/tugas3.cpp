#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Doctor {
public:
    Doctor(string name, string specialty) : name(name), specialty(specialty) {}

    string getName() const { return name; }
    string getSpecialty() const { return specialty; }

private:
    string name;
    string specialty;
};

class Appointment {
public:
    Appointment(string patientName, string doctorName, string time) 
        : patientName(patientName), doctorName(doctorName), time(time) {}

    string getPatientName() const { return patientName; }
    string getDoctorName() const { return doctorName; }
    string getTime() const { return time; }

private:
    string patientName;
    string doctorName;
    string time;
};

class MedicalScheduler {
public:
    void addDoctor(string name, string specialty) {
        doctors.push_back(Doctor(name, specialty));
    }

    bool doctorExists(string name) {
        for (const auto& doctor : doctors) {
            if (doctor.getName() == name) {
                return true;
            }
        }
        return false;
    }

    void showDoctors() {
        cout << "List of Doctors:\n";
        for (const auto& doctor : doctors) {
            cout << "Name: " << doctor.getName() << ", Specialty: " << doctor.getSpecialty() << endl;
        }
    }

    void scheduleAppointment(string patientName, string doctorName, string time) {
        if (!doctorExists(doctorName)) {
            cout << "Doctor not found.\n";
            return;
        }
        appointments.push_back(Appointment(patientName, doctorName, time));
    }

    void showAppointments() {
        cout << "Scheduled Appointments:\n";
        for (const auto& appointment : appointments) {
            cout << "Patient: " << appointment.getPatientName() << ", Doctor: " << appointment.getDoctorName() 
                 << ", Time: " << appointment.getTime() << endl;
        }
    }

private:
    vector<Doctor> doctors;
    vector<Appointment> appointments;
};

int main() {
    MedicalScheduler scheduler;
    scheduler.addDoctor("Dr. Jinsu", "Umum");
    scheduler.addDoctor("Dr. Qaiaa", "Gigi");
    scheduler.addDoctor("Dr. Kimuji", "Mata");
    scheduler.addDoctor("Dr. Sanuri", "Bedah");

    int choice;
    do {
        cout << "\n1. Show Doctors\n";
        cout << "2. Schedule an appointment\n";
        cout << "3. Show appointments\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                scheduler.showDoctors();
                break;
            case 2: {
                string patientName, doctorName, time;
                cout << "Enter patient name: ";
                cin.ignore();
                getline(cin, patientName);
                cout << "Enter doctor name: ";
                getline(cin, doctorName);
                if (!scheduler.doctorExists(doctorName)) {
                    cout << "Doctor not found. Please try again.\n";
                    break;
                }
                cout << "Enter appointment time (am/pm): ";
                getline(cin, time);
                scheduler.scheduleAppointment(patientName, doctorName, time);
                cout << "Appointment scheduled successfully.\n";
                break;
            }
            case 3:
                scheduler.showAppointments();
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice, please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
