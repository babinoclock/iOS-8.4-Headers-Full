/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:28 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensions.framework/DiagnosticExtensions
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libextension.dylib/NSExtensionContext.h>
#import <DiagnosticExtensions/DEExtensionVendorProtocol.h>

@class NSString;

@interface DEExtensionContext : NSExtensionContext <DEExtensionVendorProtocol>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(void)initExtensionWithHandler:(/*^block*/id)arg1 ;
-(void)isLoggingEnabledHandler:(/*^block*/id)arg1 ;
-(void)canEnableLoggingWithHandler:(/*^block*/id)arg1 ;
-(void)enableLoggingWithHandler:(/*^block*/id)arg1 ;
-(void)disableLoggingWithHandler:(/*^block*/id)arg1 ;
-(void)attachmentListWithHandler:(/*^block*/id)arg1 ;
-(void)attachmentsWithParams:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(char)hasEntitlement;
@end

