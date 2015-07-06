/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:37 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OADDrawableProperties.h>
#import <OfficeImport/OADEffectsParent.h>
#import <OfficeImport/OADProperties3DParent.h>

@class OADFill, NSArray, OADScene3D, OADShape3D, OADStroke, NSString;

@interface OADGraphicProperties : OADDrawableProperties <OADEffectsParent, OADProperties3DParent> {

	OADFill* mFill;
	NSArray* mEffects;
	NSArray* mExts;
	OADScene3D* mScene3D;
	OADShape3D* mShape3D;
	OADStroke* mStroke;
	unsigned mHasIsBehindText : 1;
	unsigned mIsBehindText : 1;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)fill;
-(id)stroke;
-(void)setFill:(id)arg1 ;
-(void)setStroke:(id)arg1 ;
-(char)hasFill;
-(char)hasStroke;
-(id)effects;
-(void)setEffects:(id)arg1 ;
-(void)setScene3D:(id)arg1 ;
-(void)setShape3D:(id)arg1 ;
-(void)setIsBehindText:(char)arg1 ;
-(void)setExts:(id)arg1 ;
-(char)hasExts;
-(char)hasIsBehindText;
-(id)exts;
-(char)isBehindText;
-(char)hasScene3D;
-(char)hasShape3D;
-(id)scene3D;
-(id)shape3D;
-(void)removeUnnecessaryOverrides;
-(id)initWithDefaults;
-(char)hasEffects;
-(void)setParent:(id)arg1 ;
@end

