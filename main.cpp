#include "mem.hpp"

int main() {
    HANDLE handle;
    Memory mem;
    DWORD pID;
    std::uintptr_t base;

    //get process id, handle, and baseaddress
    pID = mem.GetProcId("Notepad.exe");
    handle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, pID);
    base = mem.GetModuleBaseAddress("Notepad.exe", pID);

    std::cout << "pid: " << pID << "\nhandle: " << handle << "\nbase: " << base << "\n";

    //read process memory this is just some random value from notepad that i found with cheat engine as a test
    const auto test = mem.ReadMem<DWORD>(handle, base+0xA0BD0);
    std::cout <<"mem: " << test << "\n";
}