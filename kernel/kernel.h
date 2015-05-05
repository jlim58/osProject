/*Written by: Austin Fahsl, Alex Memering and Joel Shapiro*/

/*Interrupt functions*/
void handleInterrupt21(int ax, int bx, int cx, int dx);
void printString(char* message);
void readString(char* store);
void readSector(char* buffer, int sector);
void readFile(char* name, char* buffer);
void executeProgram(char* name, int segment);
void terminate();
void writeSector(char* toWrite, int sectorNum);
void deleteFile(char* name);
void writeFile(char* filename, char* contents, int numSectors);

/*Helper functions*/
int mod(int a, int b);
int div(int a, int b);
int matchNames(char* first, char* second, int length);
void loadFileSectors(char* buffer, char* dir);
void readWriteSector(char* buffer, int sector, int readWrite);
