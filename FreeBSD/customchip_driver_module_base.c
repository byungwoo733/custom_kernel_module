/* Custom Chip Driver Module on Custom FreeBSD by Yocto Project */
// Header Files
#include <system/kernel.h>
#include <system/cpufreq.h>
#include <system/module.h>
#include <system/platform_device.h>
#include <system/of_platform.h>


#define CUSTOMCHIP_INIT

module_init(customchip_cpufreq_init);
module_exit(customchip_cpufreq_exit);

// Function Prototypes & Definitions
int device_open(){}
int device_release(){}
ssize_t device_write(){}
ssize_t device_read(){}

// File Operation
static struct customchip_cpufreq_init 
{
	
};


static int customchip_target
{
	
}

static unsigned int customchip_
{
	
}

static void customchip_
{
	
}

/* Module Initialization Setting
if you wants to remove Module
*/
MODULE_AUTHOR("Nurgakivi Lab.");
MODULE_DESCRIPTION("Driver for Custom Chip");
MODULE_LICENSE("BSD");