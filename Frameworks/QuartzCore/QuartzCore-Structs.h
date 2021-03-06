/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:54 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct CGPath* CGPathRef;

typedef struct CGPoint {
	float x;
	float y;
} CGPoint;

typedef struct CGSize {
	float width;
	float height;
} CGSize;

typedef struct CATransform3D {
	float m11;
	float m12;
	float m13;
	float m14;
	float m21;
	float m22;
	float m23;
	float m24;
	float m31;
	float m32;
	float m33;
	float m34;
	float m41;
	float m42;
	float m43;
	float m44;
} CATransform3D;

typedef struct CAPoint3D {
	float x;
	float y;
	float z;
} CAPoint3D;

typedef struct CADoublePoint {
	double x;
	double y;
} CADoublePoint;

typedef struct CADoubleSize {
	double width;
	double height;
} CADoubleSize;

typedef struct CAColorMatrix {
	float m11;
	float m12;
	float m13;
	float m14;
	float m15;
	float m21;
	float m22;
	float m23;
	float m24;
	float m25;
	float m31;
	float m32;
	float m33;
	float m34;
	float m35;
	float m41;
	float m42;
	float m43;
	float m44;
	float m45;
} CAColorMatrix;

typedef struct CADoubleRect {
	CADoublePoint origin;
	CADoubleSize size;
} CADoubleRect;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef union {
	CGPoint point;
	CGSize size;
	CGRect rect;
	CATransform3D transform;
	CAPoint3D point3d;
	CADoublePoint dpoint;
	CADoubleSize dsize;
	CADoubleRect drect;
	CAColorMatrix color_matrix;
} SCD_Union_LK11;

typedef struct CGColor* CGColorRef;

typedef struct CGImage* CGImageRef;

typedef struct CGPattern* CGPatternRef;

typedef struct __IOSurface* IOSurfaceRef;

typedef struct CGColorSpace* CGColorSpaceRef;

typedef struct Context* ContextRef;

typedef struct CGContext* CGContextRef;

typedef struct CALayerIvars {
	int refcount;
	unsigned magic;
	void layer;
	void* unused1[8];
} CALayerIvars;

typedef struct CALayerArrayIvars {
	id layers;
	unsigned count;
	unsigned capacity;
	unsigned long mutations;
	char retained;
} CALayerArrayIvars;

typedef struct {
	unsigned long field1;
	id field2;
	unsigned long field3;
	unsigned long field4[5];
} SCD_Struct_CA21;

typedef struct CALinearMaskContext* CALinearMaskContextRef;

typedef struct __CTLine* CTLineRef;

typedef struct CATextLayerPrivate* CATextLayerPrivateRef;

typedef struct __CTTypesetter* CTTypesetterRef;

typedef struct {
	unsigned field1;
	int field2;
	long long field3;
	unsigned long long field4;
	double field5;
	long long field6;
	CVSMPTETime field7;
	unsigned long long field8;
	unsigned long long field9;
} SCD_Struct_CA26;

typedef struct _CAMLParserData* CAMLParserDataRef;

