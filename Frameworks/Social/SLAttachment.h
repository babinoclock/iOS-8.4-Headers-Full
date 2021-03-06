/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:59 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Social/NSSecureCoding.h>

@class NSString, UIImage, NSURL, NSItemProvider;

@interface SLAttachment : NSObject <NSSecureCoding> {

	/*^block*/id _previewUpdateObserver;
	/*^block*/id _payloadUpdateObserver;
	NSString* _identifier;
	char _startedPayloadLoad;
	char _needsAnotherPreviewGeneration;
	int _previewType;
	UIImage* _previewImage;
	int _type;
	id _payload;
	NSURL* _payloadSourceFileURL;
	NSItemProvider* _itemProvider;
	NSString* _typeIdentifier;
	int _itemProviderPreviewType;
	int _downsampleStatus;

}

@property (assign) int previewType;                                           //@synthesize previewType=_previewType - In the implementation block
@property (nonatomic,retain) UIImage * previewImage;                          //@synthesize previewImage=_previewImage - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) int type;                                        //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) id payload;                                        //@synthesize payload=_payload - In the implementation block
@property (nonatomic,copy) NSURL * payloadSourceFileURL;                      //@synthesize payloadSourceFileURL=_payloadSourceFileURL - In the implementation block
@property (nonatomic,retain) NSItemProvider * itemProvider;                   //@synthesize itemProvider=_itemProvider - In the implementation block
@property (nonatomic,copy) NSString * typeIdentifier;                         //@synthesize typeIdentifier=_typeIdentifier - In the implementation block
@property (nonatomic,readonly) int itemProviderPreviewType;                   //@synthesize itemProviderPreviewType=_itemProviderPreviewType - In the implementation block
@property (assign,nonatomic) int downsampleStatus;                            //@synthesize downsampleStatus=_downsampleStatus - In the implementation block
@property (assign,nonatomic) char startedPayloadLoad;                         //@synthesize startedPayloadLoad=_startedPayloadLoad - In the implementation block
@property (assign,nonatomic) char needsAnotherPreviewGeneration;              //@synthesize needsAnotherPreviewGeneration=_needsAnotherPreviewGeneration - In the implementation block
+(char)attachmentTypeRepresentsAnImage:(int)arg1 ;
+(char)supportsSecureCoding;
-(NSString *)typeIdentifier;
-(NSItemProvider *)itemProvider;
-(UIImage *)previewImage;
-(NSURL *)payloadSourceFileURL;
-(id)initWithPayload:(id)arg1 type:(int)arg2 previewImage:(id)arg3 ;
-(void)setPreviewImage:(UIImage *)arg1 ;
-(void)setPreviewType:(int)arg1 ;
-(void)setDownsampleStatus:(int)arg1 ;
-(int)previewType;
-(int)downsampleStatus;
-(void)setPreviewUpdateObserverWithBlock:(/*^block*/id)arg1 ;
-(void)setPayloadUpdateObserverWithBlock:(/*^block*/id)arg1 ;
-(void)setItemProvider:(NSItemProvider *)arg1 ;
-(void)setPayloadSourceFileURL:(NSURL *)arg1 ;
-(int)itemProviderPreviewType;
-(char)startedPayloadLoad;
-(void)setStartedPayloadLoad:(char)arg1 ;
-(char)needsAnotherPreviewGeneration;
-(void)setNeedsAnotherPreviewGeneration:(char)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(id)payload;
-(NSString *)identifier;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)_uniqueIdentifier;
-(void)setPayload:(id)arg1 ;
-(void)setTypeIdentifier:(NSString *)arg1 ;
@end

