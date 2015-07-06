/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:30 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class CKContainer, CKPlaceholderOperation, NSString, NSError, NSObject, CKTimeLogger, NSArray, CKOperationInfo;

@interface CKOperation : NSOperation {

	char _allowsCellularAccess;
	char _isExecuting;
	char _isFinished;
	char _isDiscretionary;
	CKContainer* _container;
	CKPlaceholderOperation* _placeholderOperation;
	NSString* _operationID;
	NSError* _error;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSString* _sectionID;
	NSString* _parentSectionID;
	id _context;
	CKTimeLogger* _timeLogger;
	NSArray* _requestUUIDs;
	NSString* _sourceApplicationBundleIdentifier;
	NSString* _sourceApplicationSecondaryIdentifier;
	NSString* _deviceIdentifier;
	NSObject*<OS_dispatch_source> _timeoutSource;
	int _usesBackgroundSessionOverride;

}

@property (nonatomic,retain) CKContainer * container;                                      //@synthesize container=_container - In the implementation block
@property (assign,nonatomic) char usesBackgroundSession; 
@property (assign,nonatomic) char allowsCellularAccess;                                    //@synthesize allowsCellularAccess=_allowsCellularAccess - In the implementation block
@property (nonatomic,retain) CKPlaceholderOperation * placeholderOperation;                //@synthesize placeholderOperation=_placeholderOperation - In the implementation block
@property (nonatomic,retain) NSString * operationID;                                       //@synthesize operationID=_operationID - In the implementation block
@property (assign,nonatomic) char isExecuting;                                             //@synthesize isExecuting=_isExecuting - In the implementation block
@property (assign,nonatomic) char isFinished;                                              //@synthesize isFinished=_isFinished - In the implementation block
@property (nonatomic,retain) NSError * error;                                              //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                   //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,retain) NSString * sectionID;                                         //@synthesize sectionID=_sectionID - In the implementation block
@property (nonatomic,readonly) NSString * parentSectionID;                                 //@synthesize parentSectionID=_parentSectionID - In the implementation block
@property (nonatomic,readonly) id context;                                                 //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) CKTimeLogger * timeLogger;                                    //@synthesize timeLogger=_timeLogger - In the implementation block
@property (assign,nonatomic) char isDiscretionary;                                         //@synthesize isDiscretionary=_isDiscretionary - In the implementation block
@property (nonatomic,retain) NSArray * requestUUIDs;                                       //@synthesize requestUUIDs=_requestUUIDs - In the implementation block
@property (nonatomic,readonly) CKOperationInfo * operationInfo; 
@property (nonatomic,retain) NSString * sourceApplicationBundleIdentifier;                 //@synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * sourceApplicationSecondaryIdentifier;              //@synthesize sourceApplicationSecondaryIdentifier=_sourceApplicationSecondaryIdentifier - In the implementation block
@property (nonatomic,retain) NSString * deviceIdentifier;                                  //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timeoutSource;                  //@synthesize timeoutSource=_timeoutSource - In the implementation block
@property (assign,nonatomic) int usesBackgroundSessionOverride;                            //@synthesize usesBackgroundSessionOverride=_usesBackgroundSessionOverride - In the implementation block
-(char)isDiscretionary;
-(void)fillOutOperationInfo:(id)arg1 ;
-(char)CKOperationShouldRun:(id*)arg1 ;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(void)setSectionID:(NSString *)arg1 ;
-(void)_handleCompletionCallback:(id)arg1 ;
-(void)setPlaceholderOperation:(CKPlaceholderOperation *)arg1 ;
-(CKPlaceholderOperation *)placeholderOperation;
-(NSObject*<OS_dispatch_source>)timeoutSource;
-(void)setTimeoutSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)_uninstallTimeoutSource;
-(void)_installTimeoutSource;
-(void)processOperationResult:(id)arg1 ;
-(void)setIsDiscretionary:(char)arg1 ;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)context;
-(void)setContainer:(CKContainer *)arg1 ;
-(CKContainer *)container;
-(void)start;
-(void)main;
-(char)isFinished;
-(char)isExecuting;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(char)usesBackgroundSession;
-(void)setUsesBackgroundSession:(char)arg1 ;
-(NSString *)operationID;
-(char)isConcurrent;
-(NSError *)error;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)daemon;
-(void)setSourceApplicationBundleIdentifier:(NSString *)arg1 ;
-(void)setSourceApplicationSecondaryIdentifier:(NSString *)arg1 ;
-(char)allowsCellularAccess;
-(void)setAllowsCellularAccess:(char)arg1 ;
-(NSString *)sourceApplicationBundleIdentifier;
-(NSString *)sourceApplicationSecondaryIdentifier;
-(NSString *)sectionID;
-(void)finishWithError:(id)arg1 ;
-(void)setOperationID:(NSString *)arg1 ;
-(CKTimeLogger *)timeLogger;
-(id)CKPropertiesDescription;
-(void)setTimeLogger:(CKTimeLogger *)arg1 ;
-(NSString *)parentSectionID;
-(int)usesBackgroundSessionOverride;
-(NSString *)deviceIdentifier;
-(NSArray *)requestUUIDs;
-(void)setUsesBackgroundSessionOverride:(int)arg1 ;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(void)_finishInternalOnCallbackQueueWithError:(id)arg1 ;
-(void)setIsFinished:(char)arg1 ;
-(void)setRequestUUIDs:(NSArray *)arg1 ;
-(CKOperationInfo *)operationInfo;
-(Class)operationInfoClass;
-(void)setError:(NSError *)arg1 ;
-(void)setIsExecuting:(char)arg1 ;
@end

