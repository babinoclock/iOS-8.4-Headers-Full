/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:59 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct CSTypeRef {
	unsigned _opaque_1;
	unsigned _opaque_2;
} CSTypeRef;

typedef union {
	void theChild;
	void theChildren;
} SCD_Union_VM2;

typedef struct sampling_context_t* sampling_context_tRef;

typedef struct mapped_memory_t* mapped_memory_tRef;

typedef struct objc_ivar* objc_ivarRef;

typedef struct {
	double t_begin;
	double t_end;
	int pid;
	unsigned thread;
	int run_state;
	unsigned long long dispatch_queue_serial_num;
} SCD_Struct_VM6;

typedef struct {
	SCD_Struct_VM6 context;
	unsigned long long frames;
	char* frame_types;
	unsigned length;
} SCD_Struct_VM7;

typedef struct timeval {
	int tv_sec;
	int tv_usec;
} timeval;

typedef struct VMURange {
	unsigned long long location;
	unsigned long long length;
} VMURange;

typedef struct {
	unsigned long long field1;
	unsigned field2 : 60;
	unsigned field3 : 4;
	id field4;
} SCD_Struct_VM10;

typedef struct {
	unsigned long long field1;
	int field2;
	unsigned long long field3;
} SCD_Struct_VM11;

