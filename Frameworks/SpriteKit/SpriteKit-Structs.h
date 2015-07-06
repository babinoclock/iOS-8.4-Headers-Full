/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:02 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
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

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct {
	unsigned long field1;
	id field2;
	unsigned long field3;
	unsigned long field4[5];
} SCD_Struct_SK5;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned short, std::__1::__value_type<unsigned short, SKSpriteNode *>, std::__1::less<unsigned short>, true> > {
	unsigned long __first_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned short, std::__1::__value_type<unsigned short, SKSpriteNode *>, std::__1::less<unsigned short>, true> >;

typedef struct _tree_end_node<std::__1::__tree_node_base<void *> *> {
	__tree_node_base<void *> __left_;
} tree_end_node<std::__1::__tree_node_base<void *> *>;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned short, SKSpriteNode *>, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __first_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned short, SKSpriteNode *>, void *> > >;

typedef struct _tree<std::__1::__value_type<unsigned short, SKSpriteNode *>, std::__1::__map_value_compare<unsigned short, std::__1::__value_type<unsigned short, SKSpriteNode *>, std::__1::less<unsigned short>, true>, std::__1::allocator<std::__1::__value_type<unsigned short, SKSpriteNode *> > > {
	__tree_node<std::__1::__value_type<unsigned short, SKSpriteNode *>, void *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned short, SKSpriteNode *>, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned short, std::__1::__value_type<unsigned short, SKSpriteNode *>, std::__1::less<unsigned short>, true> > __pair3_;
} tree<std::__1::__value_type<unsigned short, SKSpriteNode *>, std::__1::__map_value_compare<unsigned short, std::__1::__value_type<unsigned short, SKSpriteNode *>, std::__1::less<unsigned short>, true>, std::__1::allocator<std::__1::__value_type<unsigned short, SKSpriteNode *> > >;

typedef struct map<unsigned short, SKSpriteNode *, std::__1::less<unsigned short>, std::__1::allocator<std::__1::pair<const unsigned short, SKSpriteNode *> > > {
	tree<std::__1::__value_type<unsigned short, SKSpriteNode *>, std::__1::__map_value_compare<unsigned short, std::__1::__value_type<unsigned short, SKSpriteNode *>, std::__1::less<unsigned short>, true>, std::__1::allocator<std::__1::__value_type<unsigned short, SKSpriteNode *> > > __tree_;
} map<unsigned short, SKSpriteNode *, std::__1::less<unsigned short>, std::__1::allocator<std::__1::pair<const unsigned short, SKSpriteNode *> > >;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned short, std::__1::__value_type<unsigned short, float>, std::__1::less<unsigned short>, true> > {
	unsigned long __first_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned short, std::__1::__value_type<unsigned short, float>, std::__1::less<unsigned short>, true> >;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned short, float>, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __first_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned short, float>, void *> > >;

typedef struct _tree<std::__1::__value_type<unsigned short, float>, std::__1::__map_value_compare<unsigned short, std::__1::__value_type<unsigned short, float>, std::__1::less<unsigned short>, true>, std::__1::allocator<std::__1::__value_type<unsigned short, float> > > {
	__tree_node<std::__1::__value_type<unsigned short, float>, void *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned short, float>, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned short, std::__1::__value_type<unsigned short, float>, std::__1::less<unsigned short>, true> > __pair3_;
} tree<std::__1::__value_type<unsigned short, float>, std::__1::__map_value_compare<unsigned short, std::__1::__value_type<unsigned short, float>, std::__1::less<unsigned short>, true>, std::__1::allocator<std::__1::__value_type<unsigned short, float> > >;

typedef struct map<unsigned short, float, std::__1::less<unsigned short>, std::__1::allocator<std::__1::pair<const unsigned short, float> > > {
	tree<std::__1::__value_type<unsigned short, float>, std::__1::__map_value_compare<unsigned short, std::__1::__value_type<unsigned short, float>, std::__1::less<unsigned short>, true>, std::__1::allocator<std::__1::__value_type<unsigned short, float> > > __tree_;
} map<unsigned short, float, std::__1::less<unsigned short>, std::__1::allocator<std::__1::pair<const unsigned short, float> > >;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, float>, std::__1::less<unsigned int>, true> > {
	unsigned long __first_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, float>, std::__1::less<unsigned int>, true> >;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, float>, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __first_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, float>, void *> > >;

typedef struct _tree<std::__1::__value_type<unsigned int, float>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, float>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, float> > > {
	__tree_node<std::__1::__value_type<unsigned int, float>, void *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, float>, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, float>, std::__1::less<unsigned int>, true> > __pair3_;
} tree<std::__1::__value_type<unsigned int, float>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, float>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, float> > >;

typedef struct map<unsigned int, float, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, float> > > {
	tree<std::__1::__value_type<unsigned int, float>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, float>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, float> > > __tree_;
} map<unsigned int, float, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, float> > >;

typedef struct CGImage* CGImageRef;

typedef union GLKVector2 {
	CGPoint field1;
	CGPoint field2;
	float v[2];
} GLKVector2;

typedef struct {
	float r;
	float g;
	float b;
	float a;
} SCD_Struct_SK21;

typedef struct {
	int type;
	float duration;
	SCD_Struct_SK21 color;
} SCD_Struct_SK22;

typedef struct {
	int field1;
	float field2;
	SCD_Struct_SK21 field3;
} SCD_Struct_SK23;

typedef struct {
	float x;
	float y;
	float z;
} SCD_Struct_SK24;

typedef union GLKVector3 {
	SCD_Struct_SK24 field1;
	SCD_Struct_SK24 field2;
	SCD_Struct_SK24 field3;
	float v[3];
} GLKVector3;

typedef union GLKVector4 {
	SCD_Struct_SK21 field1;
	SCD_Struct_SK21 field2;
	SCD_Struct_SK21 field3;
	float v[4];
} GLKVector4;

typedef union GLKMatrix2 {
	SCD_Struct_SK21 field1;
	float m2[2][2];
	float m[4];
} GLKMatrix2;

typedef struct {
	float m00;
	float m01;
	float m02;
	float m10;
	float m11;
	float m12;
	float m20;
	float m21;
	float m22;
} SCD_Struct_SK28;

typedef union GLKMatrix3 {
	SCD_Struct_SK28 field1;
	float m[9];
} GLKMatrix3;

typedef struct {
	float m00;
	float m01;
	float m02;
	float m03;
	float m10;
	float m11;
	float m12;
	float m13;
	float m20;
	float m21;
	float m22;
	float m23;
	float m30;
	float m31;
	float m32;
	float m33;
} SCD_Struct_SK30;

typedef union GLKMatrix4 {
	SCD_Struct_SK30 field1;
	float m[16];
} GLKMatrix4;

typedef union {
	float _floatValue;
	GLKVector2 _floatVector2Value;
	GLKVector3 _floatVector3Value;
	GLKVector4 _floatVector4Value;
	GLKMatrix2 _floatMatrix2Value;
	GLKMatrix3 _floatMatrix3Value;
	GLKMatrix4 _floatMatrix4Value;
} SCD_Union_SK32;

typedef struct ALCdevice_struct* ALCdevice_structRef;

typedef struct ALCcontext_struct* ALCcontext_structRef;

typedef struct CGVector {
	float dx;
	float dy;
} CGVector;

typedef struct SCNVector3 {
	float x;
	float y;
	float z;
} SCNVector3;

typedef struct __IOSurface* IOSurfaceRef;

