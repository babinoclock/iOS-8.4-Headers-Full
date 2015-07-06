/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:13 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ITMLKit/IKJSEventListenerObject.h>
#import <ITMLKit/ISStoreURLOperationDelegate.h>
#import <ITMLKit/IKJSXMLHTTPRequest.h>
@class NSString, IKDOMDocument, NSDictionary;


@protocol IKJSXMLHTTPRequest <IKJSEventListenerObject,JSExport>
@property (assign) unsigned long timeout; 
@property (readonly) unsigned readyState; 
@property (readonly) unsigned status; 
@property (retain,readonly) NSString * statusText; 
@property (readonly) NSString * responseText; 
@property (readonly) IKDOMDocument * responseXML; 
@property (retain) NSString * responseType; 
@property (readonly) id response; 
@property (readonly) NSDictionary * metrics; 
@required
-(void)send:(id)arg1;
-(id)init;
-(NSDictionary *)metrics;
-(id)response;
-(unsigned)status;
-(void)setResponseType:(id)arg1;
-(void)setTimeout:(unsigned long)arg1;
-(void)open:(id)arg1 :(id)arg2 :(id)arg3 :(id)arg4 :(id)arg5;
-(void)setRequestHeader:(id)arg1 :(id)arg2;
-(unsigned long)timeout;
-(IKDOMDocument *)responseXML;
-(id)getAllResponseHeaders;
-(id)getResponseHeader:(id)arg1;
-(NSString *)responseText;
-(NSString *)responseType;
-(NSString *)statusText;
-(void)abort;
-(unsigned)readyState;

@end


@class NSString, IKDOMDocument, NSDictionary, ISURLOperation, NSMutableArray, NSMutableURLRequest, NSURLConnection, NSHTTPURLResponse, NSMutableData, NSError, JSManagedValue;

@interface IKJSXMLHTTPRequest : IKJSEventListenerObject <ISStoreURLOperationDelegate, IKJSXMLHTTPRequest> {

	char _shouldSquashOnReadyStateEvents;
	int _onReadyStateChangeMessageQueueLock;
	char _async;
	char _inProgress;
	char _jingleRequest;
	char _primeEnabled;
	unsigned long timeout;
	NSString* _dataToSend;
	ISURLOperation* _jingleOperation;
	NSMutableArray* _onReadyStateChangeMessageQueue;
	NSMutableURLRequest* _urlRequest;
	NSURLConnection* _urlConnection;
	NSString* _user;
	NSString* _password;
	int _primeRetryCount;
	NSHTTPURLResponse* _urlResponse;
	NSMutableData* _receivedData;
	int _reprimingResponseStatus;
	int _requestReadyState;
	unsigned _requestStatusCode;
	NSString* _requestStatusText;
	int _requestResponseType;
	NSError* _requestError;
	unsigned _readyState;
	unsigned _status;
	NSString* _statusText;
	NSDictionary* _performanceMetrics;
	JSManagedValue* _managedSelf;

}

@property (nonatomic,copy) NSString * dataToSend;                                          //@synthesize dataToSend=_dataToSend - In the implementation block
@property (assign,nonatomic) char jingleRequest;                                           //@synthesize jingleRequest=_jingleRequest - In the implementation block
@property (assign,nonatomic,__weak) ISURLOperation * jingleOperation;                      //@synthesize jingleOperation=_jingleOperation - In the implementation block
@property (nonatomic,retain) NSMutableArray * onReadyStateChangeMessageQueue;              //@synthesize onReadyStateChangeMessageQueue=_onReadyStateChangeMessageQueue - In the implementation block
@property (nonatomic,retain) NSMutableURLRequest * urlRequest;                             //@synthesize urlRequest=_urlRequest - In the implementation block
@property (nonatomic,retain) NSURLConnection * urlConnection;                              //@synthesize urlConnection=_urlConnection - In the implementation block
@property (nonatomic,retain) NSString * user;                                              //@synthesize user=_user - In the implementation block
@property (nonatomic,retain) NSString * password;                                          //@synthesize password=_password - In the implementation block
@property (assign,nonatomic) int primeRetryCount;                                          //@synthesize primeRetryCount=_primeRetryCount - In the implementation block
@property (nonatomic,readonly) char primeEnabled;                                          //@synthesize primeEnabled=_primeEnabled - In the implementation block
@property (nonatomic,retain) NSHTTPURLResponse * urlResponse;                              //@synthesize urlResponse=_urlResponse - In the implementation block
@property (nonatomic,retain) NSMutableData * receivedData;                                 //@synthesize receivedData=_receivedData - In the implementation block
@property (nonatomic,readonly) int reprimingResponseStatus;                                //@synthesize reprimingResponseStatus=_reprimingResponseStatus - In the implementation block
@property (assign,nonatomic) int requestReadyState;                                        //@synthesize requestReadyState=_requestReadyState - In the implementation block
@property (assign,nonatomic) unsigned requestStatusCode;                                   //@synthesize requestStatusCode=_requestStatusCode - In the implementation block
@property (nonatomic,retain) NSString * requestStatusText;                                 //@synthesize requestStatusText=_requestStatusText - In the implementation block
@property (assign,nonatomic) int requestResponseType;                                      //@synthesize requestResponseType=_requestResponseType - In the implementation block
@property (nonatomic,retain) NSError * requestError;                                       //@synthesize requestError=_requestError - In the implementation block
@property (assign) unsigned readyState;                                                    //@synthesize readyState=_readyState - In the implementation block
@property (assign) unsigned status;                                                        //@synthesize status=_status - In the implementation block
@property (retain) NSString * statusText;                                                  //@synthesize statusText=_statusText - In the implementation block
@property (retain) NSDictionary * performanceMetrics;                                      //@synthesize performanceMetrics=_performanceMetrics - In the implementation block
@property (nonatomic,retain) JSManagedValue * managedSelf;                                 //@synthesize managedSelf=_managedSelf - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) unsigned long timeout; 
@property (readonly) NSString * responseText; 
@property (readonly) IKDOMDocument * responseXML; 
@property (retain) NSString * responseType; 
@property (readonly) id response; 
@property (readonly) NSDictionary * metrics; 
+(id)xhrOperationQueue;
-(void)operation:(id)arg1 failedWithError:(id)arg2 ;
-(void)send:(id)arg1 ;
-(NSHTTPURLResponse *)urlResponse;
-(void)setStatusText:(NSString *)arg1 ;
-(id)init;
-(NSDictionary *)metrics;
-(id)response;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(unsigned)status;
-(void)setStatus:(unsigned)arg1 ;
-(NSString *)password;
-(NSString *)user;
-(void)setPassword:(NSString *)arg1 ;
-(void)setUser:(NSString *)arg1 ;
-(void)_abort;
-(void)setResponseType:(NSString *)arg1 ;
-(void)setTimeout:(unsigned long)arg1 ;
-(void)_operationFinished:(id)arg1 ;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(id)initWithAppContext:(id)arg1 jingleRequest:(char)arg2 ;
-(JSManagedValue *)managedSelf;
-(void)setManagedSelf:(JSManagedValue *)arg1 ;
-(void)setReadyState:(unsigned)arg1 ;
-(void)_setException:(id)arg1 ;
-(void)_openWithMethod:(id)arg1 url:(id)arg2 async:(char)arg3 user:(id)arg4 password:(id)arg5 ;
-(int)requestReadyState;
-(void)_sendWithData:(id)arg1 ;
-(NSMutableData *)receivedData;
-(int)requestResponseType;
-(id)responseBlob;
-(unsigned)requestStatusCode;
-(NSString *)requestStatusText;
-(NSError *)requestError;
-(id)_dequeueReadyStateChangeMessage;
-(id)_constructProgressEventData;
-(NSURLConnection *)urlConnection;
-(void)setUrlConnection:(NSURLConnection *)arg1 ;
-(void)setUrlRequest:(NSMutableURLRequest *)arg1 ;
-(void)setRequestReadyState:(int)arg1 ;
-(char)jingleRequest;
-(void)_prime:(id)arg1 ;
-(id)_createStoreOperation:(id)arg1 ;
-(void)setJingleOperation:(ISURLOperation *)arg1 ;
-(void)setReceivedData:(NSMutableData *)arg1 ;
-(void)setRequestStatusCode:(unsigned)arg1 ;
-(void)setRequestStatusText:(NSString *)arg1 ;
-(void)setRequestError:(NSError *)arg1 ;
-(void)setUrlResponse:(NSHTTPURLResponse *)arg1 ;
-(ISURLOperation *)jingleOperation;
-(void)_clearAllReadyStateChangeMessagesAndSquashFutureOnes;
-(void)setDataToSend:(NSString *)arg1 ;
-(id)_timeIntervalSince1970;
-(void)setPerformanceMetrics:(NSDictionary *)arg1 ;
-(char)_isPrimeError:(int)arg1 output:(id)arg2 ;
-(void)_reprime:(id)arg1 ;
-(int)primeRetryCount;
-(void)setPrimeRetryCount:(int)arg1 ;
-(NSString *)dataToSend;
-(void)open:(id)arg1 :(id)arg2 :(id)arg3 :(id)arg4 :(id)arg5 ;
-(void)setRequestHeader:(id)arg1 :(id)arg2 ;
-(void)setJingleRequest:(char)arg1 ;
-(NSMutableArray *)onReadyStateChangeMessageQueue;
-(void)setOnReadyStateChangeMessageQueue:(NSMutableArray *)arg1 ;
-(char)primeEnabled;
-(int)reprimingResponseStatus;
-(void)setRequestResponseType:(int)arg1 ;
-(unsigned long)timeout;
-(NSMutableURLRequest *)urlRequest;
-(IKDOMDocument *)responseXML;
-(id)getAllResponseHeaders;
-(id)getResponseHeader:(id)arg1 ;
-(NSString *)responseText;
-(NSString *)responseType;
-(NSString *)statusText;
-(void)abort;
-(unsigned)readyState;
-(NSDictionary *)performanceMetrics;
-(void)operation:(id)arg1 didDiscoverContentLength:(id)arg2 ;
-(void)operation:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)operation:(id)arg1 finishedWithOutput:(id)arg2 ;
-(void)operation:(id)arg1 willSendRequest:(id)arg2 ;
@end

