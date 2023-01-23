// FreeBSD Kernel Developer's Manual Device Driver Module Examples
#include <sys/param.h>
#include <sys/kernel.h>
#include <sys/bus.h>
#include <sys/module.h>

static int	foo_probe(device_t);
static int	foo_attach(device_t);
static int	foo_detach(device_t);
static int	foo_frob(device_t, int, int);
static int	foo_twiddle(device_t, char *);

static device_method_t foo_methods[] = {
 /* Methods from the device interface */
DEVMETHOD(device_probe, foo_probe),
DEVMETHOD(device_attach, foo_attach),
DEVMETHOD(device_detach, foo_detach),

 /* Methods from the device interface */
DEVMETHOD(bogo_frob, foo_frob),
DEVMETHOD(bogo_twiddle, foo_twiddle),

/* Terminate method list */
DEVMETHOD_END
};

     static driver_t foo_driver	= {
	     "foo",
	     foo_methods,
	     sizeof(struct foo_softc)
     };

     static devclass_t foo_devclass;

DRIVER_MODULE(foo, bogo, foo_driver, foo_devclass, NULL, NULL);
