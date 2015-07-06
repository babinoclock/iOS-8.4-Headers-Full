/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:06 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned ndouble : 1;
	unsigned nint64 : 1;
	unsigned nuint64 : 1;
	unsigned nfloat : 1;
	unsigned nint32 : 1;
	unsigned nuint32 : 1;
	unsigned subtype : 1;
	unsigned nbool : 1;
} SCD_Struct_SP1;

typedef struct CGPoint {
	float x;
	float y;
} CGPoint;

typedef struct CGSize {
	float width;
	float height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct {
	double field1;
	double field2;
} SCD_Struct_WK5;

typedef struct {
	SCD_Struct_WK5 field1;
	SCD_Struct_WK5 field2;
} SCD_Struct_WK6;
