/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:04 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLAbstractObject.h>

@class CPLPlatformObject, CPLEngineStore, NSString;

@interface CPLEngineStorage : NSObject <CPLAbstractObject> {

	char _superWasCalled;
	CPLPlatformObject* _platformObject;
	CPLEngineStore* _engineStore;
	NSString* _name;

}

@property (nonatomic,readonly) CPLEngineStore * engineStore;                    //@synthesize engineStore=_engineStore - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CPLPlatformObject * platformObject;              //@synthesize platformObject=_platformObject - In the implementation block
+(id)platformImplementationProtocol;
-(NSString *)description;
-(NSString *)name;
-(id)status;
-(char)openWithError:(id*)arg1 ;
-(id)initWithEngineStore:(id)arg1 name:(id)arg2 ;
-(CPLPlatformObject *)platformObject;
-(CPLEngineStore *)engineStore;
-(void)writeTransactionDidFail;
-(void)writeTransactionDidSucceed;
-(char)_checkSuperWasCalled;
-(char)closeWithError:(id*)arg1 ;
-(id)statusDictionary;
@end
