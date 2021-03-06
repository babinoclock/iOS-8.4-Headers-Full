/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:57 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct CGSize {
	float width;
	float height;
} CGSize;

typedef struct CGPoint {
	float x;
	float y;
} CGPoint;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct {
	char field1;
	char field2;
	char field3;
	char field4;
	char field5;
	float field6;
	int field7;
} SCD_Struct_PL3;

typedef struct UIEdgeInsets {
	float top;
	float left;
	float bottom;
	float right;
} UIEdgeInsets;

typedef struct CGImage* CGImageRef;

typedef struct CGAffineTransform {
	float a;
	float b;
	float c;
	float d;
	float tx;
	float ty;
} CGAffineTransform;

typedef struct __CFRunLoopSource* CFRunLoopSourceRef;

typedef struct {
	int version;
	void info;
	/*function pointer*/void* retain;
	/*function pointer*/void* release;
	/*function pointer*/void* copyDescription;
} SCD_Struct_PL8;

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct __CFString* CFStringRef;

typedef struct CGContext* CGContextRef;

typedef struct __IOSurface* IOSurfaceRef;

typedef struct iosPoolOpaque* iosPoolOpaqueRef;

typedef struct opaque_pthread_mutex_t {
	long __sig;
	char __opaque[40];
} opaque_pthread_mutex_t;

typedef struct entryList {
	lruEntry tqh_first;
	lruEntry tqh_last;
} entryList;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct CGPath* CGPathRef;

typedef struct __CFArray* CFArrayRef;

typedef struct {
	double x;
	double y;
} SCD_Struct_PL19;

typedef struct {
	SCD_Struct_PL19 origin;
	SCD_Struct_PL19 size;
} SCD_Struct_PL20;

