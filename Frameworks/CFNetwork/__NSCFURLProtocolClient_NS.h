/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:27 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/NSURLProtocolClient.h>

@class NSURLAuthenticationChallenge, NSString;

@interface __NSCFURLProtocolClient_NS : NSObject <NSURLProtocolClient> {

	URLProtocolClient* _cf;
	URLProtocol* _prot;
	NSURLAuthenticationChallenge* _challenge;
	CFURLAuthChallengeRef _cfChallenge;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)URLProtocol:(id)arg1 cachedResponseIsValid:(id)arg2 ;
-(void)URLProtocol:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 ;
-(void)URLProtocol:(id)arg1 didCancelAuthenticationChallenge:(id)arg2 ;
-(id)initWithCFClient:(URLProtocolClient*)arg1 prot:(URLProtocol*)arg2 ;
-(void)URLProtocol:(id)arg1 didFailWithError:(id)arg2 ;
-(void)URLProtocol:(id)arg1 wasRedirectedToRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(void)URLProtocolDidFinishLoading:(id)arg1 ;
-(void)dealloc;
-(void)teardown;
-(void)URLProtocol:(id)arg1 didReceiveResponse:(id)arg2 cacheStoragePolicy:(unsigned)arg3 ;
-(void)URLProtocol:(id)arg1 didLoadData:(id)arg2 ;
-(CFURLAuthChallengeRef)cfChallenge;
-(id)challenge;
@end

