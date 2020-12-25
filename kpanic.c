#include <linux/kernel.h>
#include <linux/module.h>
MODULE_LICENSE("GPL");
static int8_t* message = "page not found: 0x0000000000000194";
int init_module(void){
  panic(message);
  return 0;
}
