/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:52 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libacmobileshim.dylib/ACFHTTPMethodInvocationDelegate.h>

@class NSString, NSDictionary, ACFHTTPMethodInvocation, NSData;

@interface ACMHTTPHandler : NSObject <ACFHTTPMethodInvocationDelegate> {

	NSString* _address;
	NSString* _httpMethod;
	NSDictionary* _httpHeader;
	NSDictionary* _httpGETParameters;
	ACFHTTPMethodInvocation* _methodInvocation;
	double _timeout;
	char _isCanceled;
	/*^block*/id _finalizeBlock;
	/*^block*/id _completionBlock;

}

@property (nonatomic,copy) id finalizeBlock;                                      //@synthesize finalizeBlock=_finalizeBlock - In the implementation block
@property (nonatomic,copy) id completionBlock;                                    //@synthesize completionBlock=_completionBlock - In the implementation block
@property (retain) NSString * httpMethod;                                         //@synthesize httpMethod=_httpMethod - In the implementation block
@property (retain) NSDictionary * httpHeader;                                     //@synthesize httpHeader=_httpHeader - In the implementation block
@property (retain) NSDictionary * httpGETParameters;                              //@synthesize httpGETParameters=_httpGETParameters - In the implementation block
@property (retain) NSString * address;                                            //@synthesize address=_address - In the implementation block
@property (assign) double timeout;                                                //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,readonly) NSData * httpPOSTBody; 
@property (nonatomic,readonly) NSDictionary * httpRequestDictionary; 
@property (nonatomic,readonly) NSDictionary * requestHeader; 
@property (nonatomic,readonly) NSDictionary * requestBody; 
@property (assign,nonatomic) char isCanceled;                                     //@synthesize isCanceled=_isCanceled - In the implementation block
@property (retain) ACFHTTPMethodInvocation * methodInvocation;                    //@synthesize methodInvocation=_methodInvocation - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)handler;
+(id)requestString:(id)arg1 ;
+(id)responseWithData:(id)arg1 error:(id*)arg2 ;
-(NSString *)address;
-(void)dealloc;
-(id)init;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(NSString *)httpMethod;
-(NSDictionary *)requestBody;
-(void)setTimeout:(double)arg1 ;
-(void)setAddress:(NSString *)arg1 ;
-(double)timeout;
-(char)isCanceled;
-(void)setFinalizeBlock:(id)arg1 ;
-(void)launchMethodInvocation;
-(void)setHttpHeader:(NSDictionary *)arg1 ;
-(void)setHttpMethod:(NSString *)arg1 ;
-(void)setHttpGETParameters:(NSDictionary *)arg1 ;
-(ACFHTTPMethodInvocation *)methodInvocation;
-(void)setMethodInvocation:(ACFHTTPMethodInvocation *)arg1 ;
-(void)setIsCanceled:(char)arg1 ;
-(void)requestWillCanceled;
-(NSDictionary *)requestHeader;
-(NSDictionary *)httpRequestDictionary;
-(id)finalizeBlock;
-(void)callCompletionBlockWithResponse:(id)arg1 error:(id)arg2 ;
-(id)convertToACMError:(id)arg1 ;
-(NSDictionary *)httpGETParameters;
-(id)urlWithRequest:(id)arg1 ;
-(NSDictionary *)httpHeader;
-(NSData *)httpPOSTBody;
-(void)finalizeInvocation;
-(void)cancelMethodInvocation;
-(void)httpMethodInvocation:(id)arg1 didFinishWithResult:(id)arg2 ;
-(void)httpMethodInvocation:(id)arg1 didFailWithError:(id)arg2 ;
-(id)httpMethodInvocation:(id)arg1 credentialForProtectionSpace:(id)arg2 ;
-(void)didStopWithError:(id)arg1 ;
-(void)didReceiveResponse:(id)arg1 ;
-(void)didStopWithResponse:(id)arg1 ;
@end

