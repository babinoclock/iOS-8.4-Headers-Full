/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:46 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADClient.h>
#import <OfficeImport/OADImageRecolorInfoClient.h>

@class OADImageRecolorInfo, PDPlaceholder, PDAnimationInfo, NSString;

@interface PDOfficeArtClient : NSObject <OADClient, OADImageRecolorInfoClient> {

	OADImageRecolorInfo* mImageRecolorInfo;
	PDPlaceholder* mPlaceholder;
	char mIsComment;
	PDAnimationInfo* mAnimationInfo;
	char mHasOleChart;
	int mInheritedTextStylePlaceholderType;

}

@property (assign,nonatomic) int inheritedTextStylePlaceholderType; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(CGRect)bounds;
-(id)init;
-(void)setPlaceholder:(id)arg1 ;
-(id)placeholder;
-(char)hasBounds;
-(char)hasPlaceholder;
-(void)setInheritedTextStylePlaceholderType:(int)arg1 ;
-(void)setImageRecolorInfo:(id)arg1 ;
-(void)setHasOleChart:(char)arg1 ;
-(char)hasOleChart;
-(id)imageRecolorInfo;
-(char)isComment;
-(void)setIsComment:(char)arg1 ;
-(int)inheritedTextStylePlaceholderType;
-(char)hasAnimationInfo;
-(id)animationInfo;
-(void)setAnimationInfo:(id)arg1 ;
@end

