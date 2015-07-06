/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:32 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL, NSData, NSString, UIImage;

@interface SFAirDropPayload : NSObject {

	char _wasString;
	NSURL* _URL;
	NSData* _data;
	NSString* _type;
	UIImage* _previewImage;
	NSString* _payloadDescription;
	int _identifer;

}

@property (assign,nonatomic) char wasString;                           //@synthesize wasString=_wasString - In the implementation block
@property (nonatomic,copy) NSURL * URL;                                //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain) NSData * data;                            //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) NSString * type;                            //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) UIImage * previewImage;                   //@synthesize previewImage=_previewImage - In the implementation block
@property (nonatomic,copy) NSString * payloadDescription;              //@synthesize payloadDescription=_payloadDescription - In the implementation block
@property (assign,nonatomic) int identifer;                            //@synthesize identifer=_identifer - In the implementation block
+(id)newPayloadWithData:(id)arg1 ofType:(id)arg2 description:(id)arg3 previewImage:(id)arg4 identifier:(int)arg5 ;
+(id)newPayloadWithURL:(id)arg1 description:(id)arg2 previewImage:(id)arg3 identifier:(int)arg4 ;
-(UIImage *)previewImage;
-(void)setPreviewImage:(UIImage *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(NSString *)payloadDescription;
-(int)identifer;
-(void)setPayloadDescription:(NSString *)arg1 ;
-(void)setIdentifer:(int)arg1 ;
-(char)wasString;
-(void)setWasString:(char)arg1 ;
@end

