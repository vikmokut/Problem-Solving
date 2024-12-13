#ifndef HEALTH_APP_H
#define HEALTH_APP_H

struct Patient;
void addPatient(const std::string& filename);
void viewPatient(const std::string& filename);
void editPatient(const std::string& filename);

#endif
