/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:02 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, NSURL;

@interface SKStorePageRequest : NSObject {

	int _pageStyle;
	NSDictionary* _productParameters;
	NSURL* _productURL;

}

@property (assign,nonatomic) int productPageStyle;                        //@synthesize pageStyle=_pageStyle - In the implementation block
@property (nonatomic,copy) NSDictionary * productParameters;              //@synthesize productParameters=_productParameters - In the implementation block
@property (nonatomic,copy) NSURL * productURL;                            //@synthesize productURL=_productURL - In the implementation block
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(void)dealloc;
-(int)productPageStyle;
-(void)setProductPageStyle:(int)arg1 ;
-(NSURL *)productURL;
-(NSDictionary *)productParameters;
-(void)setProductParameters:(NSDictionary *)arg1 ;
-(void)setProductURL:(NSURL *)arg1 ;
@end

