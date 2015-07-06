/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:45 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct __CLClient* CLClientRef;

typedef struct {
	double latitude;
	double longitude;
} SCD_Struct_CL1;

typedef struct {
	int suitability;
	SCD_Struct_CL1 coordinate;
	double horizontalAccuracy;
	double altitude;
	double verticalAccuracy;
	double speed;
	double speedAccuracy;
	double course;
	double courseAccuracy;
	double timestamp;
	int confidence;
	double lifespan;
	int type;
	SCD_Struct_CL1 rawCoordinate;
	double rawCourse;
	int floor;
	unsigned integrity;
} SCD_Struct_CL2;

typedef struct __CFRunLoopTimer* CFRunLoopTimerRef;

typedef struct {
	double bestAccuracy;
} SCD_Struct_CL4;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	double x;
	double y;
	double z;
	double magneticHeading;
	double trueHeading;
	double accuracy;
	double timestamp;
	double temperature;
	double magnitude;
	double inclination;
	int calibration;
} SCD_Struct_CL6;

typedef struct {
	char proximityUUID[512];
	unsigned short major;
	unsigned short minor;
	int definitionMask;
	BOOL notifyEntryStateOnDisplay;
} SCD_Struct_CL7;

typedef struct {
	SCD_Struct_CL1 center;
	double radius;
	double desiredAccuracy;
} SCD_Struct_CL8;

typedef struct {
	char identifier[512];
	int type;
	BOOL notifyOnEntry;
	BOOL notifyOnExit;
	/*function pointer*/void* ;
	SCD_Struct_CL7 beaconAttributes;
	SCD_Struct_CL8) circularAttributes;
} SCD_Struct_CL9;

typedef struct {
	char field1[512];
	int field2;
	BOOL field3;
	BOOL( field4;
	/*function pointer*/void* field5;
	= field6;
	SCD_Struct_CL7 field7;
	SCD_Struct_CL8) field8;
} SCD_Struct_CL10;

typedef struct {
	int field1;
	SCD_Struct_CL1 field2;
	double field3;
	double field4;
	double field5;
	double field6;
	double field7;
	double field8;
	double field9;
	double field10;
	int field11;
	double field12;
	int field13;
	SCD_Struct_CL1 field14;
	double field15;
	int field16;
	unsigned field17;
} SCD_Struct_CL11;

