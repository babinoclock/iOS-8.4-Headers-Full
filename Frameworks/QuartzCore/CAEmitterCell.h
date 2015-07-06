/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:53 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/NSCopying.h>
#import <QuartzCore/CAPropertyInfo.h>
#import <QuartzCore/NSCoding.h>
#import <QuartzCore/CAMediaTiming.h>

@class NSString, NSArray, NSDictionary;

@interface CAEmitterCell : NSObject <NSCopying, CAPropertyInfo, NSCoding, CAMediaTiming> {

	void** _attr[2];
	void* _state;
	unsigned _flags;

}

@property (copy) NSString * particleType; 
@property (assign) float orientationLatitude; 
@property (assign) float orientationLongitude; 
@property (assign) float orientationRange; 
@property (assign) float rotation; 
@property (assign) float rotationRange; 
@property (assign) float mass; 
@property (assign) float massRange; 
@property (assign) float contentsScale; 
@property (copy) NSString * contentsFrameMode; 
@property (assign) unsigned contentsFrameCount; 
@property (assign) unsigned contentsFramesPerRow; 
@property (assign) float contentsFramesPerSecond; 
@property (copy) NSArray * emitterBehaviors; 
@property (copy) NSString * name; 
@property (getter=isEnabled) char enabled; 
@property (assign) float birthRate; 
@property (assign) float lifetime; 
@property (assign) float lifetimeRange; 
@property (assign) float emissionLatitude; 
@property (assign) float emissionLongitude; 
@property (assign) float emissionRange; 
@property (assign) float velocity; 
@property (assign) float velocityRange; 
@property (assign) float xAcceleration; 
@property (assign) float yAcceleration; 
@property (assign) float zAcceleration; 
@property (assign) float scale; 
@property (assign) float scaleRange; 
@property (assign) float scaleSpeed; 
@property (assign) float spin; 
@property (assign) float spinRange; 
@property (assign) CGColorRef color; 
@property (assign) float redRange; 
@property (assign) float greenRange; 
@property (assign) float blueRange; 
@property (assign) float alphaRange; 
@property (assign) float redSpeed; 
@property (assign) float greenSpeed; 
@property (assign) float blueSpeed; 
@property (assign) float alphaSpeed; 
@property (retain) id contents; 
@property (assign) CGRect contentsRect; 
@property (copy) NSString * minificationFilter; 
@property (copy) NSString * magnificationFilter; 
@property (assign) float minificationFilterBias; 
@property (copy) NSArray * emitterCells; 
@property (copy) NSDictionary * style; 
@property (assign) double beginTime; 
@property (assign) double duration; 
@property (assign) float speed; 
@property (assign) double timeOffset; 
@property (assign) float repeatCount; 
@property (assign) double repeatDuration; 
@property (assign) char autoreverses; 
@property (copy) NSString * fillMode; 
+(id)defaultValueForKey:(id)arg1 ;
+(char)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(void)CAMLParserStartElement:(id)arg1 ;
+(id)emitterCell;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)properties;
-(void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)CAMLTypeForKey:(id)arg1 ;
-(Object*)CA_copyRenderValue;
-(char)shouldArchiveValueForKey:(id)arg1 ;
-(NSString *)particleType;
-(float)lifetime;
-(float)lifetimeRange;
-(float)emissionLatitude;
-(float)emissionLongitude;
-(float)emissionRange;
-(float)velocityRange;
-(float)xAcceleration;
-(float)yAcceleration;
-(float)zAcceleration;
-(float)massRange;
-(float)scaleRange;
-(float)scaleSpeed;
-(float)orientationLatitude;
-(float)orientationLongitude;
-(float)orientationRange;
-(float)rotationRange;
-(float)spin;
-(float)spinRange;
-(float)redRange;
-(float)greenRange;
-(float)blueRange;
-(float)alphaRange;
-(float)redSpeed;
-(float)greenSpeed;
-(float)blueSpeed;
-(float)alphaSpeed;
-(float)minificationFilterBias;
-(unsigned)contentsFrameCount;
-(unsigned)contentsFramesPerRow;
-(float)contentsFramesPerSecond;
-(NSString *)contentsFrameMode;
-(NSArray *)emitterCells;
-(NSArray *)emitterBehaviors;
-(void)setLifetime:(float)arg1 ;
-(void)setLifetimeRange:(float)arg1 ;
-(void)setEmissionLatitude:(float)arg1 ;
-(void)setEmissionLongitude:(float)arg1 ;
-(void)setEmissionRange:(float)arg1 ;
-(void)setVelocityRange:(float)arg1 ;
-(void)setXAcceleration:(float)arg1 ;
-(void)setYAcceleration:(float)arg1 ;
-(void)setZAcceleration:(float)arg1 ;
-(void)setScaleRange:(float)arg1 ;
-(void)setScaleSpeed:(float)arg1 ;
-(void)setOrientationLatitude:(float)arg1 ;
-(void)setOrientationLongitude:(float)arg1 ;
-(void)setOrientationRange:(float)arg1 ;
-(void)setRotationRange:(float)arg1 ;
-(void)setSpin:(float)arg1 ;
-(void)setSpinRange:(float)arg1 ;
-(void)setRedRange:(float)arg1 ;
-(void)setRedSpeed:(float)arg1 ;
-(void)setGreenRange:(float)arg1 ;
-(void)setGreenSpeed:(float)arg1 ;
-(void)setBlueRange:(float)arg1 ;
-(void)setBlueSpeed:(float)arg1 ;
-(void)setAlphaRange:(float)arg1 ;
-(void)setAlphaSpeed:(float)arg1 ;
-(void)setMinificationFilterBias:(float)arg1 ;
-(void)setEmitterCells:(NSArray *)arg1 ;
-(void)setParticleType:(NSString *)arg1 ;
-(void)setMassRange:(float)arg1 ;
-(void)setEmitterBehaviors:(NSArray *)arg1 ;
-(void)setContentsFrameMode:(NSString *)arg1 ;
-(void)setContentsFrameCount:(unsigned)arg1 ;
-(void)setContentsFramesPerRow:(unsigned)arg1 ;
-(void)setContentsFramesPerSecond:(float)arg1 ;
-(float)birthRate;
-(void)setBirthRate:(float)arg1 ;
-(void)setRepeatDuration:(double)arg1 ;
-(double)repeatDuration;
-(NSString *)minificationFilter;
-(NSString *)magnificationFilter;
-(id)valueForKey:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(void)setSpeed:(float)arg1 ;
-(void)setVelocity:(float)arg1 ;
-(void)setMass:(float)arg1 ;
-(double)duration;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setDuration:(double)arg1 ;
-(float)scale;
-(void)didChangeValueForKey:(id)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)style;
-(id)contents;
-(id)valueForKeyPath:(id)arg1 ;
-(float)repeatCount;
-(void)setFillMode:(NSString *)arg1 ;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
-(void)setBeginTime:(double)arg1 ;
-(void)setRepeatCount:(float)arg1 ;
-(void)setAutoreverses:(char)arg1 ;
-(void)setMagnificationFilter:(NSString *)arg1 ;
-(void)setContentsRect:(CGRect)arg1 ;
-(float)contentsScale;
-(void)setContentsScale:(float)arg1 ;
-(double)beginTime;
-(float)speed;
-(double)timeOffset;
-(void)setContents:(id)arg1 ;
-(void)setScale:(float)arg1 ;
-(void)setTimeOffset:(double)arg1 ;
-(void)setStyle:(NSDictionary *)arg1 ;
-(CGColorRef)color;
-(void)setColor:(CGColorRef)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(float)velocity;
-(void)setRotation:(float)arg1 ;
-(float)rotation;
-(float)mass;
-(CGRect)contentsRect;
-(void)setMinificationFilter:(NSString *)arg1 ;
-(void)CA_prepareRenderValue;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(char)autoreverses;
-(NSString *)fillMode;
@end

