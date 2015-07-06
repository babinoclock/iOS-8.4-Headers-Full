/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:50 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKBalloonChatItem.h>

@class FMFLocation, IMHandle, NSString;

@interface CKLocationShareOfferChatItem : CKBalloonChatItem {

	FMFLocation* _lastKnownLocation;

}

@property (nonatomic,readonly) int offerState; 
@property (nonatomic,readonly) IMHandle * sender; 
@property (nonatomic,readonly) NSString * titleText; 
@property (nonatomic,readonly) NSString * locationText; 
@property (nonatomic,retain) FMFLocation * lastKnownLocation;              //@synthesize lastKnownLocation=_lastKnownLocation - In the implementation block
+(id)placeholderPreviewCache;
+(id)titleBarMaskImageForWidth:(float)arg1 ;
-(void)dealloc;
-(id)time;
-(IMHandle *)sender;
-(Class)balloonViewClass;
-(char)isFromMe;
-(id)previewForWidth:(float)arg1 orientation:(char)arg2 ;
-(int)offerState;
-(id)initWithIMChatItem:(id)arg1 maxWidth:(float)arg2 ;
-(void)_handleLocationDidChangeNotification:(id)arg1 ;
-(void)setLastKnownLocation:(FMFLocation *)arg1 ;
-(FMFLocation *)lastKnownLocation;
-(id)_previewCacheKey:(unsigned)arg1 ;
-(id)savedPreviewFromURL:(id)arg1 ;
-(id)_desaturatedImageForImage:(id)arg1 ;
-(id)_generatePlaceholderThumbnailFillToSize:(CGSize)arg1 ;
-(void)_generateMapPreview;
-(id)_generateThumbnailFillToSize:(CGSize)arg1 contentAlignmentInsets:(UIEdgeInsets)arg2 withCoordinate:(SCD_Struct_CK4)arg3 forState:(int)arg4 ;
-(void)savePreview:(id)arg1 toURL:(id)arg2 ;
-(char)failed;
-(void)configureBalloonView:(id)arg1 ;
-(NSString *)locationText;
-(NSString *)titleText;
@end

