#include "../vJoy-SDK/inc/vjoyinterface.h"
#include "../vJoy-SDK/inc/public.h"
#include "../vJoy-SDK/src/stdafx.h"
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#include "Math.h"

#define DEV_ID	1

int main() {
	if (!vJoyEnabled()) {
		printf("Failed to get vJoy attributes\n");
		return -2;
	}
	else {
		printf("Vendor: %S\nProduct: %S\nVersion: %S\n",TEXT(GetvJoyManufacturerString()),TEXT(GetvJoyProductString()),TEXT(GetvJoySerialNumberString()));
	};
};