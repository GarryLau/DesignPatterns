#include "Command.h"
#include "RemoteControl.h"

int main() {
    Light light;
    OnCommand oncommand(&light);
    OffCommand offcommand(&light);

    /* invoker objects */
    RemoteControl rc;
    rc.setCommand(&oncommand);
    rc.buttonPressed();
    rc.setCommand(&offcommand);
    rc.buttonPressed();

    return 0;
}