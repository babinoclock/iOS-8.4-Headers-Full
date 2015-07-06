/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:54 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <QuartzCore/QuartzCore-Structs.h>
@class NSArray, CADisplayMode, NSString;

@interface CADisplay : NSObject {

	void* _impl;

}

@property (nonatomic,readonly) NSArray * availableModes; 
@property (nonatomic,retain) CADisplayMode * currentMode; 
@property (nonatomic,readonly) CADisplayMode * preferredMode; 
@property (nonatomic,copy) NSString * colorMode; 
@property (assign) char allowsVirtualModes; 
@property (nonatomic,readonly) CGRect bounds; 
@property (nonatomic,readonly) CGRect frame; 
@property (nonatomic,readonly) CGRect safeBounds; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * deviceName; 
@property (readonly) unsigned displayId; 
@property (readonly) unsigned seed; 
@property (readonly) unsigned connectionSeed; 
@property (readonly) NSString * uniqueId; 
@property (getter=isSupported,readonly) char supported; 
@property (readonly) int tag; 
@property (getter=isExternal,readonly) char external; 
@property (readonly) double refreshRate; 
@property (getter=isOverscanned,readonly) char overscanned; 
@property (nonatomic,copy) NSString * overscanAdjustment; 
@property (readonly) float overscanAmount; 
@property (getter=isCloned,readonly) char cloned; 
@property (getter=isCloningSupported,readonly) char cloningSupported; 
+(id)TVOutDisplay;
+(id)mainDisplay;
+(id)displays;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(char)isSupported;
-(char)isCloned;
-(id)_initWithDisplay:(Display*)arg1 ;
-(unsigned)connectionSeed;
-(NSString *)colorMode;
-(void)setColorMode:(NSString *)arg1 ;
-(char)allowsVirtualModes;
-(void)setAllowsVirtualModes:(char)arg1 ;
-(CGRect)safeBounds;
-(CGRect)bounds;
-(CGRect)frame;
-(id)description;
-(NSString *)name;
-(unsigned)displayId;
-(int)tag;
-(CADisplayMode *)currentMode;
-(void)update;
-(NSArray *)availableModes;
-(char)isOverscanned;
-(NSString *)overscanAdjustment;
-(void)setOverscanAdjustment:(NSString *)arg1 ;
-(float)overscanAmount;
-(double)refreshRate;
-(char)isCloningSupported;
-(CADisplayMode *)preferredMode;
-(void)setCurrentMode:(CADisplayMode *)arg1 ;
-(unsigned)seed;
-(char)isExternal;
-(NSString *)uniqueId;
-(void)_invalidate;
-(NSString *)deviceName;
@end

