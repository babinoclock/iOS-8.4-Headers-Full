/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:56 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>
#import <CloudKitDaemon/CKDFlowControllable.h>

@protocol OS_dispatch_queue, OS_dispatch_group, NSObject;
@class NSString, CKDURLRequest, CKTimeLogger, NSDate, CKDClientContext, CKDClientProxy, NSObject, NSError, NSMutableArray, CKOperationResult;

@interface CKDOperation : NSOperation <CKDFlowControllable> {

	unsigned _state;
	char _isFinished;
	char _isExecuting;
	char _useEncryption;
	char _usesBackgroundSession;
	char _allowsCellularAccess;
	char _allowsPowerNapScheduling;
	CKDURLRequest* _request;
	CKTimeLogger* _timeLogger;
	NSString* _operationID;
	NSDate* _startDate;
	CKDOperation* _parentOperation;
	CKDClientContext* _context;
	CKDClientProxy* _proxy;
	NSString* _sourceApplicationBundleIdentifier;
	NSString* _sourceApplicationSecondaryIdentifier;
	NSString* _deviceIdentifier;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSError* _error;
	NSObject*<OS_dispatch_group> _stateTransitionGroup;
	NSMutableArray* _requestUUIDs;
	NSString* _parentSectionID;
	NSMutableArray* _childOperations;
	NSMutableArray* _finishedChildOperationIDs;
	id<NSObject> _powerAssertion;

}

@property (nonatomic,retain) CKTimeLogger * timeLogger;                                      //@synthesize timeLogger=_timeLogger - In the implementation block
@property (nonatomic,readonly) NSString * sectionID; 
@property (nonatomic,readonly) NSString * operationID;                                       //@synthesize operationID=_operationID - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                                             //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic,__weak) CKDOperation * parentOperation;                          //@synthesize parentOperation=_parentOperation - In the implementation block
@property (nonatomic,retain) CKDClientContext * context;                                     //@synthesize context=_context - In the implementation block
@property (assign,nonatomic,__weak) CKDClientProxy * proxy;                                  //@synthesize proxy=_proxy - In the implementation block
@property (nonatomic,readonly) char shouldCheckAppVersion; 
@property (assign,nonatomic) char useEncryption;                                             //@synthesize useEncryption=_useEncryption - In the implementation block
@property (assign,nonatomic) char usesBackgroundSession;                                     //@synthesize usesBackgroundSession=_usesBackgroundSession - In the implementation block
@property (assign,nonatomic) char allowsCellularAccess;                                      //@synthesize allowsCellularAccess=_allowsCellularAccess - In the implementation block
@property (assign,nonatomic) char allowsPowerNapScheduling;                                  //@synthesize allowsPowerNapScheduling=_allowsPowerNapScheduling - In the implementation block
@property (nonatomic,retain) NSString * sourceApplicationBundleIdentifier;                   //@synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * sourceApplicationSecondaryIdentifier;                //@synthesize sourceApplicationSecondaryIdentifier=_sourceApplicationSecondaryIdentifier - In the implementation block
@property (nonatomic,retain) NSString * deviceIdentifier;                                    //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned QOSClass; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                     //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (assign,nonatomic) char isExecuting;                                               //@synthesize isExecuting=_isExecuting - In the implementation block
@property (assign,nonatomic) char isFinished;                                                //@synthesize isFinished=_isFinished - In the implementation block
@property (retain) NSError * error;                                                          //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) CKDURLRequest * request;                                        //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) CKOperationResult * operationResult; 
@property (assign,nonatomic) unsigned state; 
@property (nonatomic,retain) NSObject*<OS_dispatch_group> stateTransitionGroup;              //@synthesize stateTransitionGroup=_stateTransitionGroup - In the implementation block
@property (nonatomic,retain) NSMutableArray * requestUUIDs;                                  //@synthesize requestUUIDs=_requestUUIDs - In the implementation block
@property (nonatomic,retain) NSString * parentSectionID;                                     //@synthesize parentSectionID=_parentSectionID - In the implementation block
@property (nonatomic,retain) NSMutableArray * childOperations;                               //@synthesize childOperations=_childOperations - In the implementation block
@property (nonatomic,retain) NSMutableArray * finishedChildOperationIDs;                     //@synthesize finishedChildOperationIDs=_finishedChildOperationIDs - In the implementation block
@property (nonatomic,retain) id<NSObject> powerAssertion;                                    //@synthesize powerAssertion=_powerAssertion - In the implementation block
@property (nonatomic,readonly) NSString * flowControlKey; 
+(id)_globalOperationCallbackQueueForQOS:(int)arg1 ;
-(void)cancel;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned)state;
-(void)setState:(unsigned)arg1 ;
-(CKDURLRequest *)request;
-(CKDClientContext *)context;
-(void)setContext:(CKDClientContext *)arg1 ;
-(void)start;
-(void)main;
-(CKDClientProxy *)proxy;
-(char)isFinished;
-(char)isExecuting;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(char)usesBackgroundSession;
-(void)setUsesBackgroundSession:(char)arg1 ;
-(NSString *)operationID;
-(char)isConcurrent;
-(NSError *)error;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setSourceApplicationBundleIdentifier:(NSString *)arg1 ;
-(void)setSourceApplicationSecondaryIdentifier:(NSString *)arg1 ;
-(char)allowsCellularAccess;
-(void)setAllowsCellularAccess:(char)arg1 ;
-(void)setProxy:(CKDClientProxy *)arg1 ;
-(NSString *)sourceApplicationBundleIdentifier;
-(NSString *)sourceApplicationSecondaryIdentifier;
-(NSString *)sectionID;
-(void)finishWithError:(id)arg1 ;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(CKOperationResult *)operationResult;
-(CKTimeLogger *)timeLogger;
-(void)setAllowsPowerNapScheduling:(char)arg1 ;
-(id)CKPropertiesDescription;
-(char)allowsPowerNapScheduling;
-(void)setTimeLogger:(CKTimeLogger *)arg1 ;
-(CKDOperation *)parentOperation;
-(NSString *)parentSectionID;
-(char)useEncryption;
-(NSString *)deviceIdentifier;
-(id)nameForState:(unsigned)arg1 ;
-(NSMutableArray *)requestUUIDs;
-(NSMutableArray *)finishedChildOperationIDs;
-(NSMutableArray *)childOperations;
-(void)setParentOperation:(CKDOperation *)arg1 ;
-(void)setParentSectionID:(NSString *)arg1 ;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(void)_continueOperationStart;
-(char)operationShouldBeFlowControlled;
-(char)shouldCheckAppVersion;
-(char)_checkAppVersion;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(void)_finishInternalOnCallbackQueueWithError:(id)arg1 ;
-(char)_errorShouldImpactFlowControl:(id)arg1 ;
-(void)setIsFinished:(char)arg1 ;
-(char)makeStateTransition;
-(NSObject*<OS_dispatch_group>)stateTransitionGroup;
-(unsigned)QOSClass;
-(void)makeStateTransition:(char)arg1 ;
-(NSString *)flowControlKey;
-(void)configureRequest:(id)arg1 ;
-(void)setRequestUUIDs:(NSMutableArray *)arg1 ;
-(Class)operationResultClass;
-(void)fillOutOperationResult:(id)arg1 ;
-(id)newChildOperationInfoOfClass:(Class)arg1 ;
-(void)addAndRunChildOperation:(id)arg1 ;
-(void)setUseEncryption:(char)arg1 ;
-(void)setStateTransitionGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)setChildOperations:(NSMutableArray *)arg1 ;
-(void)setFinishedChildOperationIDs:(NSMutableArray *)arg1 ;
-(id<NSObject>)powerAssertion;
-(void)setPowerAssertion:(id<NSObject>)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(void)setIsExecuting:(char)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(void)setRequest:(CKDURLRequest *)arg1 ;
@end

