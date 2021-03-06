/*Written by: Austin Fahsl, Alex Memering and Joel Shapiro*/

/*Entered line*/
#define MAXLINELENGTH 256
#define MAXARGSLENGTH 100
#define MAXARGCHARS 100
#define CONSOLEHEIGHT 25



/*Configures input and hands it to correct command*/
void matchCommand(char* line);
int match(char* line, char* command);
void breakApartArgs(char* args[], char* line);

/*Shell commands*/
void editCommand(char* args[]);
void typeCommand(char* args[]);
void executeCommand(char* args[]);
void deleteCommand(char* args[]);
void copyCommand(char* args[]);
void dirCommand(char* args[]);
void createCommand(char* args[]);
void killCommand(char* args[]);
void executeForegroundCommand(char* args[]);
void clearCommand(char* args[]);
void quitCommand(char* args[]);
void listProcessCommand(char* args[]);
void helpCommand(char* args[]);

/*Helpers*/
int neededSectors(int charactersToStore);
int addEntryName(char* output, char* name);
int fastMod10(int num);
