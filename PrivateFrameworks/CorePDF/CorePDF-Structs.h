/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:15 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct CGContext* CGContextRef;

typedef struct CGPath* CGPathRef;

typedef struct CGPoint {
	float x;
	float y;
} CGPoint;

typedef struct CGColor* CGColorRef;

typedef struct CGPDFPage* CGPDFPageRef;

typedef struct {
	CGPoint field1;
	CGPoint field2;
	CGPoint field3;
	CGPoint field4;
} SCD_Struct_UI5;

typedef struct CGSize {
	float width;
	float height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct _NSZone* NSZoneRef;

typedef struct opaque_pthread_mutex_t {
	long __sig;
	char __opaque[40];
} opaque_pthread_mutex_t;

typedef struct CGPDFLayout* CGPDFLayoutRef;

typedef struct CGAffineTransform {
	float a;
	float b;
	float c;
	float d;
	float tx;
	float ty;
} CGAffineTransform;

typedef struct __CFArray* CFArrayRef;

typedef struct CGPDFNode* CGPDFNodeRef;

typedef struct CGPDFSelection* CGPDFSelectionRef;

typedef struct {
	int location;
	int length;
} SCD_Struct_CP15;

typedef struct {
	CGColor field1;
	CGRect field2;
	unsigned field3;
	id field4;
} SCD_Struct_CP16;

typedef struct {
	unsigned field1;
	unsigned field2;
	int field3;
	int field4;
	CGRect field5;
} SCD_Struct_CP17;

typedef struct CGPDFFont* CGPDFFontRef;

typedef struct CGFont* CGFontRef;

typedef struct {
	float fontStretch;
	float fontWeight;
	unsigned flags;
	CGRect fontBBox;
	float italicAngle;
	float ascent;
	float descent;
	float leading;
	float capHeight;
	float xHeight;
	float stemV;
	float stemH;
	float avgWidth;
	float maxWidth;
	float missingWidth;
	float spaceWidth;
	float underlinePosition;
	float underlineThickness;
} SCD_Struct_CP20;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct CGPDFDictionary* CGPDFDictionaryRef;

typedef struct {
	double field1;
	unsigned field2;
	double field3;
	double field4;
	unsigned field5;
	double field6;
	double field7;
	char field8;
	double field9;
	double field10;
	double field11;
	double field12;
	double field13;
	double field14;
	double field15;
	double field16;
	double field17;
	double field18;
	double field19;
	char field20;
} SCD_Struct_CP23;

typedef struct {
	unsigned field1;
	double field2;
	double field3;
	double field4;
} SCD_Struct_CP24;

typedef struct {
	unsigned field1;
	CGRect field2;
} SCD_Struct_CP25;

typedef struct __CFData* CFDataRef;

typedef struct {
	float field1;
	float field2;
	unsigned field3;
	CGRect field4;
	float field5;
	float field6;
	float field7;
	float field8;
	float field9;
	float field10;
	float field11;
	float field12;
	float field13;
	float field14;
	float field15;
	float field16;
	float field17;
	float field18;
} SCD_Struct_CP27;

typedef struct CGPDFDocument* CGPDFDocumentRef;

typedef struct NSRange {
	unsigned location;
	unsigned length;
} NSRange;

typedef struct {
	float field1;
	float field2;
	float field3;
	float field4;
	int field5;
	int field6;
	CPPDFStyle field7;
} SCD_Struct_CP30;

typedef struct {
	unsigned allocatedSize;
	unsigned size;
	unsigned count;
	/*function pointer*/void* stats;
	/*function pointer*/void* ordered;
} SCD_Struct_CP31;

typedef struct {
	id field1;
	unsigned field2;
	/*function pointer*/void* field3;
} SCD_Struct_CP32;

typedef struct {
	CGPoint field1;
	unsigned field2;
	unsigned field3;
	unsigned field4;
	unsigned field5;
	unsigned field6;
	unsigned field7;
	unsigned field8;
	unsigned field9;
	unsigned field10;
	unsigned field11;
	unsigned field12;
	unsigned field13;
	unsigned field14;
	CGPoint field15;
	CGPoint field16;
	CGPoint field17;
	CGRect field18;
	float field19;
	float field20;
	char field21;
	char field22;
	char field23;
} SCD_Struct_CP33;

typedef struct __CFString* CFStringRef;

typedef struct CGPDFString* CGPDFStringRef;

typedef struct CGPDFArray* CGPDFArrayRef;

typedef struct CGImage* CGImageRef;

typedef struct {
	unsigned long field1;
	id field2;
	unsigned long field3;
	unsigned long field4[5];
} SCD_Struct_RM38;

