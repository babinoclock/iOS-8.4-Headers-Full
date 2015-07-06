/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:33 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <BulletinBoard/NSCopying.h>
#import <BulletinBoard/NSSecureCoding.h>

@class NSArray;

@interface BBBehaviorOverride : NSObject <NSCopying, NSSecureCoding> {

	unsigned _overrideType;
	unsigned _mode;
	NSArray* _effectiveIntervals;

}

@property (assign,nonatomic) unsigned overrideType;                   //@synthesize overrideType=_overrideType - In the implementation block
@property (assign,nonatomic) unsigned mode;                           //@synthesize mode=_mode - In the implementation block
@property (nonatomic,copy) NSArray * effectiveIntervals;              //@synthesize effectiveIntervals=_effectiveIntervals - In the implementation block
+(char)supportsSecureCoding;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMode:(unsigned)arg1 ;
-(unsigned)mode;
-(id)nextOverrideTransitionDateAfterDate:(id)arg1 ;
-(char)isActiveForDate:(id)arg1 ;
-(void)setEffectiveIntervals:(NSArray *)arg1 ;
-(id)initWithEffectiveIntervals:(id)arg1 overrideType:(unsigned)arg2 ;
-(id)initWithOverrideType:(unsigned)arg1 mode:(unsigned)arg2 effectiveIntervals:(id)arg3 ;
-(unsigned)overrideType;
-(void)setOverrideType:(unsigned)arg1 ;
-(NSArray *)effectiveIntervals;
@end

