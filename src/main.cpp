#include "mbed.h"
#include "lvgl_interface.h"

#include "SDIOBlockDevice.h"
#include "FATFileSystem.h"


DigitalOut  ledRed(LED1, 0);

SDIOBlockDevice bd;
FATFileSystem fs("sda", &bd);

void print_dir(FileSystem *fs, const char* dirname) {
    Dir dir(fs, dirname);
    struct dirent ent;

    // dir.open(fs, dirname);
    printf("contents of dir: %s\n", dirname);
    printf("----------------------------------------------------\n");

    while (1) {
        size_t res = dir.read(&ent);
        if (0 == res) {
            break;
        }
        printf(ent.d_name);
        printf("\n");
    }
    dir.close();
}



int main()
{
    // init sdc
    print_dir(&fs, "/");
    printf("\n"); 

    // init lvgl
    lvgl_interface_init();

	while(true) {
        ledRed = !ledRed;
        
        ThisThread::sleep_for(500ms);
    }

	// main() is expected to loop forever.
	// If main() actually returns the processor will halt
	return 0;
}

extern "C" {
    void _kill() {};
    void _getpid() {};
}