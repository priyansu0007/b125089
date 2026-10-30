#include <iostream>
#include <string>

using namespace std;

class BackupPolicy {
public:
    virtual double calculateStorage(double dataSizeMB) = 0;
    virtual ~BackupPolicy() {}
};

class FullBackup : public BackupPolicy {
public:
    double calculateStorage(double dataSizeMB) {
        return dataSizeMB;
    }
};

class IncrementalBackup : public BackupPolicy {
public:
    double calculateStorage(double dataSizeMB) {
        return (0.25 * dataSizeMB) + 50.0;
    }
};

int main() {
    FullBackup full;
    IncrementalBackup inc;

    BackupPolicy* policyPtr = NULL;
    double dataSize = 400.0; // MB

    cout << "Original Data Size: " << dataSize << " MB\n\n";

    policyPtr = &full;
    cout << "Full Backup Storage Required        : "
         << policyPtr->calculateStorage(dataSize) << " MB\n";

    policyPtr = &inc;
    cout << "Incremental Backup Storage Required : "
         << policyPtr->calculateStorage(dataSize) << " MB\n";

    return 0;
}
