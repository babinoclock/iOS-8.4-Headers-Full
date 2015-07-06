/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:28 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDate, NSString, NSURL, UIImage;

@interface AAUIFamilyCreditCard : NSObject {

	NSDate* _expirationDate;
	NSString* _lastFourDigits;
	NSString* _type;
	NSString* _usageNotice;
	NSString* _providerDescription;
	NSURL* _imageURL;
	UIImage* _image;

}

@property (nonatomic,copy) NSDate * expirationDate;                     //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,copy) NSString * lastFourDigits;                   //@synthesize lastFourDigits=_lastFourDigits - In the implementation block
@property (nonatomic,copy) NSString * type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * usageNotice;                      //@synthesize usageNotice=_usageNotice - In the implementation block
@property (nonatomic,copy) NSString * providerDescription;              //@synthesize providerDescription=_providerDescription - In the implementation block
@property (nonatomic,copy) NSURL * imageURL;                            //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,retain) UIImage * image;                           //@synthesize image=_image - In the implementation block
-(void)setImage:(UIImage *)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(UIImage *)image;
-(NSString *)lastFourDigits;
-(void)setLastFourDigits:(NSString *)arg1 ;
-(NSString *)usageNotice;
-(void)setUsageNotice:(NSString *)arg1 ;
-(NSString *)providerDescription;
-(void)setProviderDescription:(NSString *)arg1 ;
-(void)setImageURL:(NSURL *)arg1 ;
-(NSURL *)imageURL;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
@end

