/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:05 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, <PKPhysicsContactDelegate>;

typedef struct _NSZone* NSZoneRef;

typedef struct b2Vec2 {
	float x;
	float y;
} b2Vec2;

typedef struct b2BodyDef {
	BOOL _sk_affectedByGravity;
	unsigned _sk_fieldCategoryBitMask;
	unsigned _sk_categoryBitMask;
	unsigned _sk_collisionBitMask;
	unsigned _sk_intersectionCallbackBitMask;
	int type;
	unsigned position : 2Vec2;
	float angle;
	unsigned linearVelocity : 2Vec2;
	float angularVelocity;
	float charge;
	float linearDamping;
	float angularDamping;
	BOOL allowSleep;
	BOOL awake;
	BOOL fixedRotation;
	BOOL bullet;
	BOOL active;
	void userData;
} b2BodyDef;

typedef struct PKCField* PKCFieldRef;

typedef struct _compressed_pair<PKPhysicsShape **, std::__1::allocator<PKPhysicsShape *> > {
	PKPhysicsShape __first_;
} compressed_pair<PKPhysicsShape **, std::__1::allocator<PKPhysicsShape *> >;

typedef struct vector<PKPhysicsShape *, std::__1::allocator<PKPhysicsShape *> > {
	PKPhysicsShape __begin_;
	PKPhysicsShape __end_;
	compressed_pair<PKPhysicsShape **, std::__1::allocator<PKPhysicsShape *> > __end_cap_;
} vector<PKPhysicsShape *, std::__1::allocator<PKPhysicsShape *> >;

typedef struct shared_ptr<PKPath> {
	PKPath __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<PKPath>;

typedef struct shared_ptr<QuadTree> {
	QuadTree __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<QuadTree>;

typedef struct CGPoint {
	float x;
	float y;
} CGPoint;

typedef struct CGSize {
	float width;
	float height;
} CGSize;

typedef struct CGImage* CGImageRef;

typedef struct CGPath* CGPathRef;

typedef struct PKCGridiiiRangeffffffvector<unsigned char, std::__1::allocator<unsigned char> >**__compressed_pair<unsigned char *, std::__1::allocator<unsigned char> >*vector<float __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> >__compressed_pair<float * __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> >vector<int, std::__1::allocator<int> >ii__compressed_pair<int *, std::__1::allocator<int> >ivector<signed char, std::__1::allocator<signed char> >**__compressed_pair<signed char *, std::__1::allocator<signed char> >** KCGridRef;

typedef struct CGVector {
	float dx;
	float dy;
} CGVector;

typedef struct b2RevoluteJointDef {
	int type;
	void userData;
	unsigned bodyA : 2Body;
	unsigned bodyB : 2Body;
	BOOL collideConnected;
	unsigned localAnchorA : 2Vec2;
	unsigned localAnchorB : 2Vec2;
	float referenceAngle;
	BOOL enableLimit;
	float lowerAngle;
	float upperAngle;
	BOOL enableMotor;
	float motorSpeed;
	float maxMotorTorque;
} b2RevoluteJointDef;

typedef struct b2DistanceJointDef {
	int type;
	void userData;
	unsigned bodyA : 2Body;
	unsigned bodyB : 2Body;
	BOOL collideConnected;
	unsigned localAnchorA : 2Vec2;
	unsigned localAnchorB : 2Vec2;
	float length;
	float frequencyHz;
	float dampingRatio;
} b2DistanceJointDef;

typedef struct b2WeldJointDef {
	int type;
	void userData;
	unsigned bodyA : 2Body;
	unsigned bodyB : 2Body;
	BOOL collideConnected;
	unsigned localAnchorA : 2Vec2;
	unsigned localAnchorB : 2Vec2;
	float referenceAngle;
} b2WeldJointDef;

typedef struct b2PrismaticJointDef {
	int type;
	void userData;
	unsigned bodyA : 2Body;
	unsigned bodyB : 2Body;
	BOOL collideConnected;
	unsigned localAnchorA : 2Vec2;
	unsigned localAnchorB : 2Vec2;
	unsigned localAxisA : 2Vec2;
	float referenceAngle;
	BOOL enableLimit;
	float lowerTranslation;
	float upperTranslation;
	BOOL enableMotor;
	float maxMotorForce;
	float motorSpeed;
} b2PrismaticJointDef;

typedef struct b2RopeJointDef {
	int type;
	void userData;
	unsigned bodyA : 2Body;
	unsigned bodyB : 2Body;
	BOOL collideConnected;
	unsigned localAnchorA : 2Vec2;
	unsigned localAnchorB : 2Vec2;
	float maxLength;
} b2RopeJointDef;

typedef struct shared_ptr<PKCField> {
	PKCField __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<PKCField>;

typedef struct PKContactListener {
	/*function pointer*/void* _vptr$b2ContactListener;
	NSMutableDictionary* _contacts;
	<PKPhysicsContactDelegate>* _contactDelegate;
} PKContactListener;

typedef struct _compressed_pair<PKPoint *, std::__1::allocator<PKPoint> > {
	/*function pointer*/void* __first_;
} compressed_pair<PKPoint *, std::__1::allocator<PKPoint> >;

typedef struct _compressed_pair<PKDebugDrawPacket::color4 *, std::__1::allocator<PKDebugDrawPacket::color4> > {
	/*function pointer*/void* __first_;
} compressed_pair<PKDebugDrawPacket::color4 *, std::__1::allocator<PKDebugDrawPacket::color4> >;

typedef struct vector<PKDebugDrawPacket::color4, std::__1::allocator<PKDebugDrawPacket::color4> > {
	/*function pointer*/void* __begin_;
	/*function pointer*/void* __end_;
	compressed_pair<PKDebugDrawPacket::color4 *, std::__1::allocator<PKDebugDrawPacket::color4> > __end_cap_;
} vector<PKDebugDrawPacket::color4, std::__1::allocator<PKDebugDrawPacket::color4> >;

typedef struct vector<PKPoint, std::__1::allocator<PKPoint> > {
	/*function pointer*/void* __begin_;
	/*function pointer*/void* __end_;
	compressed_pair<PKPoint *, std::__1::allocator<PKPoint> > __end_cap_;
} vector<PKPoint, std::__1::allocator<PKPoint> >;

typedef struct PKDebugDrawPacket {
	vector<PKPoint, std::__1::allocator<PKPoint> > _linePoints;
	vector<PKDebugDrawPacket::color4, std::__1::allocator<PKDebugDrawPacket::color4> > _colors;
} PKDebugDrawPacket;

typedef struct shared_ptr<PKCGrid> {
	PKCGrid __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<PKCGrid>;

typedef struct {
	unsigned field1 : 2Vec2;
	unsigned field2 : 2Vec2;
} SCD_Struct_PK27;

typedef struct vec4 {
	 v;
} vec4;

typedef struct shared_ptr<PKCPathHolder> {
	PKCPathHolder __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<PKCPathHolder>;

