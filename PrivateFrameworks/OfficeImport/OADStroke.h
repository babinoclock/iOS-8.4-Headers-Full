/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:38 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADProperties.h>
#import <OfficeImport/NSCopying.h>

@class OADColor, OADFill, OADDash, OADLineJoin, OADLineEnd;

@interface OADStroke : OADProperties <NSCopying> {

	OADColor* mColor;
	OADFill* mFill;
	OADDash* mDash;
	OADLineJoin* mJoin;
	OADLineEnd* mHead;
	OADLineEnd* mTail;
	float mWidth;
	unsigned char mCap;
	unsigned char mCompoundType;
	unsigned char mPenAlignment;
	unsigned mIsColorOverridden : 1;
	unsigned mIsCompoundTypeOverridden : 1;
	unsigned mIsCapOverridden : 1;
	unsigned mIsWidthOverridden : 1;
	unsigned mIsJoinOverridden : 1;
	unsigned mIsDashOverridden : 1;
	unsigned mIsFillOverridden : 1;
	unsigned mIsPenAlignmentOverridden : 1;

}

@property (nonatomic,retain) OADLineEnd * head; 
@property (nonatomic,retain) OADLineEnd * tail; 
+(id)defaultProperties;
+(id)nullStroke;
+(id)blackStroke;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)fill;
-(float)width;
-(id)color;
-(void)setColor:(id)arg1 ;
-(void)setWidth:(float)arg1 ;
-(char)isWidthOverridden;
-(char)isColorOverridden;
-(char)isFillOverridden;
-(char)isDashOverridden;
-(id)dash;
-(char)isCompoundTypeOverridden;
-(int)compoundType;
-(void)setFill:(id)arg1 ;
-(OADLineEnd *)tail;
-(void)setCap:(int)arg1 ;
-(void)setCompoundType:(int)arg1 ;
-(void)setPenAlignment:(int)arg1 ;
-(void)setDash:(id)arg1 ;
-(void)setJoin:(id)arg1 ;
-(void)setStyleColor:(id)arg1 ;
-(char)isCapOverridden;
-(int)cap;
-(id)initWithDefaults;
-(void)setHead:(OADLineEnd *)arg1 ;
-(void)setTail:(OADLineEnd *)arg1 ;
-(id)join;
-(char)isJoinOverridden;
-(char)isPenAlignmentOverridden;
-(int)penAlignment;
-(void)setParent:(id)arg1 ;
-(OADLineEnd *)head;
@end

