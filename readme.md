# c++ ProcessMemory Class

A c++ class that should make reading/writing process memory alot easier

## How to use

First you need to get the process id of the program you want using the GetProcId() function.
Then you can get a handle to the process using the OpenProcess() function from the windows api.
Lastly you can get the module base adress by using the GetModuleBaseAdress() function.

Now you can read/write memory using the ReadMem() and WriteMem() functions.
