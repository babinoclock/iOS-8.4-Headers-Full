/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:23 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <WebUI/WebUI-Structs.h>
@class NSMutableDictionary, NSDictionary, NSObject;

@interface WBSFormDataController : NSObject {

	NSMutableDictionary* _completionDB;
	NSMutableDictionary* _valuesDB;
	NSMutableDictionary* _preferredLabelsMap;
	unsigned _completionDBSize;
	NSMutableDictionary* _domainToLastUsedUsernameAndProtectionSpace;
	NSDictionary* _allCredentialsCache;
	NSObject*<OS_dispatch_queue> _allCredentialsCacheAccessQueue;
	int _keychainChangedNotificationToken;

}
+(char)canAutocompleteTextField:(id)arg1 inForm:(id)arg2 ;
+(char)formContainsCreditCardNumberField:(id)arg1 ;
+(id)dontSaveMarker;
+(id)stringWithAddressBookValue:(id)arg1 key:(id)arg2 ;
+(char)convertNumber:(id)arg1 toAutoFillFormType:(unsigned*)arg2 ;
+(char)formContainsCreditCardData:(id)arg1 ;
+(id)valueOfControlWithUniqueID:(id)arg1 inForm:(id)arg2 ;
+(id)domainFromURL:(id)arg1 ;
+(id)continuingFieldsInFormControls:(id)arg1 startingAtIndex:(unsigned)arg2 textFieldsOnly:(char)arg3 ignorePositioning:(char)arg4 ;
+(id)specifierForControl:(id)arg1 ;
+(id)_metadataForControlWithUniqueID:(id)arg1 inForm:(id)arg2 ;
+(char)stringLooksLikeCreditCardNumber:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(char)shouldAutoFillPasswords;
-(unsigned)addValuesForStandardFormControls:(id)arg1 startingAtIndex:(unsigned)arg2 fromAutoFillItem:(id)arg3 toDictionary:(id)arg4 formTextSample:(id)arg5 ;
-(id)valuesFromCredential:(id)arg1 forLoginOrChangePasswordForm:(id)arg2 ;
-(char)shouldAutoFillFromAddressBook;
-(char)shouldAutoFillFromPreviousData;
-(id)matchesForControl:(id)arg1 withName:(id)arg2 atURL:(id)arg3 matchingPartialString:(id)arg4 usingOnlyAddressBookData:(char)arg5 ;
-(id)credentialMatchesForURL:(id)arg1 matchingPartialString:(id)arg2 ;
-(void)getFormFieldValues:(id*)arg1 andFieldToFocus:(id*)arg2 forCreditCardForm:(id)arg3 fromCreditCardData:(id)arg4 ;
-(id)lastUsedUsernameForURL:(id)arg1 ;
-(char)hasCredentialsForPageWithMainFrame:(id)arg1 ;
-(id)activeOrFirstAutoFillableFormFromProvider:(id)arg1 frame:(OpaqueFormAutoFillFrame*)arg2 forPrefillingCredentials:(char)arg3 ;
-(id)allFormDataForSaving;
-(id)completionDBPath;
-(id)preferredIdentifierForProperty:(id)arg1 ;
-(id)valuesForLoginOrChangePasswordForm:(id)arg1 atURL:(id)arg2 potentialMatches:(id*)arg3 ;
-(id)valuesForStandardForm:(id)arg1 inDomain:(id)arg2 usingOnlyAddressBookData:(char)arg3 matches:(id*)arg4 ;
-(void)willSubmitFormWithCredentials:(id)arg1 atURL:(id)arg2 username:(id*)arg3 password:(id*)arg4 ;
-(void)getCredentialMatches:(id*)arg1 andPotentialMatches:(id*)arg2 forURL:(id)arg3 matchingPartialUsername:(id)arg4 ;
-(id)lastUsedUsernameForURL:(id)arg1 protectionSpace:(id*)arg2 ;
-(void)saveCompletionDBSoon;
-(id)addressBookMatchesForProperty:(id)arg1 key:(id)arg2 label:(id)arg3 ;
-(id)encryptOrDecryptData:(id)arg1 encrypt:(char)arg2 ;
-(id)domainsWithPreviousData;
-(void)domainsWithPreviousDataChanged;
-(void)pruneCompletionDB;
-(void)loadCompletionDBIfNeeded;
-(id)infoForDomain:(id)arg1 ;
-(id)matchesForControl:(id)arg1 withName:(id)arg2 inDomain:(id)arg3 matchingPartialString:(id)arg4 usingOnlyAddressBookData:(char)arg5 preferredLabel:(id)arg6 ;
-(void)addPreviousDataMatchesForFieldWithName:(id)arg1 inDomain:(id)arg2 matchingPartialString:(id)arg3 toArray:(id)arg4 ;
-(void)addABMatchesForValueSpecifier:(id)arg1 matchingPartialString:(id)arg2 toArray:(id)arg3 preferredLabel:(id)arg4 ;
-(void)reapABMarker:(id)arg1 domain:(id)arg2 fieldName:(id)arg3 ;
-(id)valuesForStandardForm:(id)arg1 inDomain:(id)arg2 usingOnlyAddressBookData:(char)arg3 matches:(id*)arg4 preferredLabel:(id)arg5 ;
-(id)bestMatchForControl:(id)arg1 inDomain:(id)arg2 matchingPartialString:(id)arg3 usingOnlyAddressBookData:(char)arg4 preferredLabel:(id)arg5 ;
-(unsigned)addValuesForStandardFormControlsInForm:(id)arg1 startingAtIndex:(unsigned)arg2 fromAutoFillItem:(id)arg3 toDictionary:(id)arg4 ;
-(void)getCredentialMatches:(id*)arg1 andPotentialMatches:(id*)arg2 forURL:(id)arg3 matchingPartialUsername:(id)arg4 omittingCredentialsUserHasDeniedAccessTo:(char)arg5 ;
-(id)matchForLoginOrChangePasswordForm:(id)arg1 atURL:(id)arg2 potentialMatches:(id*)arg3 ;
-(id)_lastUsedUsernameForDomain:(id)arg1 protectionSpace:(id*)arg2 ;
-(id)substituteCredential:(id)arg1 inProtectionSpace:(id)arg2 ;
-(char)hasUserDeniedAccessToCredential:(id)arg1 inProtectionSpace:(id)arg2 ;
-(void)_setLastUsedUsername:(id)arg1 andProtectionSpace:(id)arg2 forDomain:(id)arg3 ;
-(void)clearPreviousDataForDomain:(id)arg1 ;
-(void)clearPreviousDataDatabaseItemsAddedAfterDate:(id)arg1 ;
-(void)clearPreviousDataDatabase;
-(void)setInfo:(id)arg1 forDomain:(id)arg2 ;
-(void)setPreferredIdentifier:(id)arg1 forProperty:(id)arg2 ;
-(id)valuesForCreditCardForm:(id)arg1 fromCreditCardData:(id)arg2 ;
-(id)valuesForLoginOrChangePasswordForm:(id)arg1 atURL:(id)arg2 ;
@end

