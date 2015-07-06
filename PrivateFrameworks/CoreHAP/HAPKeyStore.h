/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:09 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol HAPKeyStore <NSObject>
@optional
-(char)savePeripheralIdentifier:(id)arg1 forAccessoryName:(id)arg2 error:(id*)arg3;
-(char)updatePeripheralIdentifier:(id)arg1 forAccessoryName:(id)arg2 error:(id*)arg3;
-(char)deletePeripheralIdentifierForAccessoryName:(id)arg1 error:(id*)arg2;
-(char)deleteAllPeripheralIdentifiers:(id*)arg1;
-(id)readPeripheralIdentifierForAccessoryName:(id)arg1 error:(id*)arg2;
-(id)getPeripherialIdentifiersAndAccessoryNames;

@required
-(char)getControllerPublicKey:(id*)arg1 secretKey:(id*)arg2 username:(id*)arg3 allowCreation:(char)arg4 error:(id*)arg5;
-(id)readPublicKeyForAccessoryName:(id)arg1 registeredWithHomeKit:(char*)arg2 error:(id*)arg3;
-(char)registerAccessoryWithHomeKit:(id)arg1 error:(id*)arg2;
-(char)removeAccessoryKeyForName:(id)arg1 error:(id*)arg2;
-(char)savePublicKey:(id)arg1 forAccessoryName:(id)arg2 error:(id*)arg3;
-(char)getAllAvailableControllerPublicKeys:(id*)arg1 secretKeys:(id*)arg2 userNames:(id*)arg3 error:(id*)arg4;
-(void)updateActiveControllerPairingIdentifier:(id)arg1;
-(char)removeControllerKeyPairWithError:(id*)arg1;
-(char)updateCurrentiCloudIdentifier:(id)arg1 controllerPairingIdentifier:(id)arg2 error:(id*)arg3;
-(char)getCurrentiCloudIdentifier:(id*)arg1 controllerPairingIdentifier:(id*)arg2 error:(id*)arg3;
-(char)removeControllerKeyPairForIdentifier:(id)arg1 leaveTombstone:(char)arg2 error:(id*)arg3;
-(char)getMetadataSecretKey:(id*)arg1 error:(id*)arg2;
-(char)removeAllAccessoryKeys:(id*)arg1;

@end
