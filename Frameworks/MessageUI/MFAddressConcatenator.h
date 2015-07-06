/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:42 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface MFAddressConcatenator : NSObject {

	NSString* _andNMoreFormat;
	NSString* _andNMoreNoEllipsisFormat;
	NSString* _oneAddressFormat;
	NSString* _nAddressesFormat;
	NSString* _truncatedAddressFormat;

}

@property (nonatomic,retain) NSString * andNMoreFormat;                        //@synthesize andNMoreFormat=_andNMoreFormat - In the implementation block
@property (nonatomic,retain) NSString * andNMoreNoEllipsisFormat;              //@synthesize andNMoreNoEllipsisFormat=_andNMoreNoEllipsisFormat - In the implementation block
@property (nonatomic,retain) NSString * oneAddressFormat;                      //@synthesize oneAddressFormat=_oneAddressFormat - In the implementation block
@property (nonatomic,retain) NSString * nAddressesFormat;                      //@synthesize nAddressesFormat=_nAddressesFormat - In the implementation block
@property (nonatomic,retain) NSString * truncatedAddressFormat;                //@synthesize truncatedAddressFormat=_truncatedAddressFormat - In the implementation block
+(id)defaultRecipientListConcatenator;
-(void)setAndNMoreFormat:(NSString *)arg1 ;
-(void)setAndNMoreNoEllipsisFormat:(NSString *)arg1 ;
-(void)setNAddressesFormat:(NSString *)arg1 ;
-(void)setOneAddressFormat:(NSString *)arg1 ;
-(void)setTruncatedAddressFormat:(NSString *)arg1 ;
-(void)getCommaSeparatedAddressList:(out id*)arg1 andListSuffix:(out id*)arg2 withAddressCount:(unsigned)arg3 prefixForAddressAtIndex:(/*^block*/id)arg4 stringForAddressAtIndex:(/*^block*/id)arg5 lengthValidationBlock:(/*^block*/id)arg6 ;
-(id)commaSeparatedAddressListWithAddressCount:(unsigned)arg1 prefixForAddressAtIndex:(/*^block*/id)arg2 stringForAddressAtIndex:(/*^block*/id)arg3 lengthValidationBlock:(/*^block*/id)arg4 ;
-(NSString *)andNMoreFormat;
-(NSString *)andNMoreNoEllipsisFormat;
-(NSString *)oneAddressFormat;
-(NSString *)nAddressesFormat;
-(NSString *)truncatedAddressFormat;
-(void)dealloc;
@end

