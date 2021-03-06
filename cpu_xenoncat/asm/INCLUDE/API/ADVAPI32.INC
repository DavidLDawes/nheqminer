
; ADVAPI32 API calls

import advapi32,\
       AbortSystemShutdownA,'AbortSystemShutdownA',\
       AbortSystemShutdownW,'AbortSystemShutdownW',\
       AccessCheck,'AccessCheck',\
       AccessCheckAndAuditAlarmA,'AccessCheckAndAuditAlarmA',\
       AccessCheckAndAuditAlarmW,'AccessCheckAndAuditAlarmW',\
       AccessCheckByType,'AccessCheckByType',\
       AccessCheckByTypeAndAuditAlarmA,'AccessCheckByTypeAndAuditAlarmA',\
       AccessCheckByTypeAndAuditAlarmW,'AccessCheckByTypeAndAuditAlarmW',\
       AccessCheckByTypeResultList,'AccessCheckByTypeResultList',\
       AccessCheckByTypeResultListAndAuditAlarmA,'AccessCheckByTypeResultListAndAuditAlarmA',\
       AccessCheckByTypeResultListAndAuditAlarmW,'AccessCheckByTypeResultListAndAuditAlarmW',\
       AddAccessAllowedAce,'AddAccessAllowedAce',\
       AddAccessAllowedAceEx,'AddAccessAllowedAceEx',\
       AddAccessAllowedObjectAce,'AddAccessAllowedObjectAce',\
       AddAccessDeniedAce,'AddAccessDeniedAce',\
       AddAccessDeniedAceEx,'AddAccessDeniedAceEx',\
       AddAccessDeniedObjectAce,'AddAccessDeniedObjectAce',\
       AddAce,'AddAce',\
       AddAuditAccessAce,'AddAuditAccessAce',\
       AddAuditAccessAceEx,'AddAuditAccessAceEx',\
       AddAuditAccessObjectAce,'AddAuditAccessObjectAce',\
       AdjustTokenGroups,'AdjustTokenGroups',\
       AdjustTokenPrivileges,'AdjustTokenPrivileges',\
       AllocateAndInitializeSid,'AllocateAndInitializeSid',\
       AllocateLocallyUniqueId,'AllocateLocallyUniqueId',\
       AreAllAccessesGranted,'AreAllAccessesGranted',\
       AreAnyAccessesGranted,'AreAnyAccessesGranted',\
       BackupEventLogA,'BackupEventLogA',\
       BackupEventLogW,'BackupEventLogW',\
       BuildExplicitAccessWithNameA,'BuildExplicitAccessWithNameA',\
       BuildExplicitAccessWithNameW,'BuildExplicitAccessWithNameW',\
       BuildImpersonateExplicitAccessWithNameA,'BuildImpersonateExplicitAccessWithNameA',\
       BuildImpersonateExplicitAccessWithNameW,'BuildImpersonateExplicitAccessWithNameW',\
       BuildImpersonateTrusteeA,'BuildImpersonateTrusteeA',\
       BuildImpersonateTrusteeW,'BuildImpersonateTrusteeW',\
       BuildSecurityDescriptorA,'BuildSecurityDescriptorA',\
       BuildSecurityDescriptorW,'BuildSecurityDescriptorW',\
       BuildTrusteeWithNameA,'BuildTrusteeWithNameA',\
       BuildTrusteeWithNameW,'BuildTrusteeWithNameW',\
       BuildTrusteeWithSidA,'BuildTrusteeWithSidA',\
       BuildTrusteeWithSidW,'BuildTrusteeWithSidW',\
       CancelOverlappedAccess,'CancelOverlappedAccess',\
       ChangeServiceConfig2A,'ChangeServiceConfig2A',\
       ChangeServiceConfig2W,'ChangeServiceConfig2W',\
       ChangeServiceConfigA,'ChangeServiceConfigA',\
       ChangeServiceConfigW,'ChangeServiceConfigW',\
       ClearEventLogA,'ClearEventLogA',\
       ClearEventLogW,'ClearEventLogW',\
       CloseEventLog,'CloseEventLog',\
       CloseRaw,'CloseRaw',\
       CloseServiceHandle,'CloseServiceHandle',\
       ControlService,'ControlService',\
       ConvertAccessToSecurityDescriptorA,'ConvertAccessToSecurityDescriptorA',\
       ConvertAccessToSecurityDescriptorW,'ConvertAccessToSecurityDescriptorW',\
       ConvertSecurityDescriptorToAccessA,'ConvertSecurityDescriptorToAccessA',\
       ConvertSecurityDescriptorToAccessW,'ConvertSecurityDescriptorToAccessW',\
       ConvertSecurityDescriptorToAccessNamedA,'ConvertSecurityDescriptorToAccessNamedA',\
       ConvertSecurityDescriptorToAccessNamedW,'ConvertSecurityDescriptorToAccessNamedW',\
       ConvertToAutoInheritPrivateObjectSecurity,'ConvertToAutoInheritPrivateObjectSecurity',\
       CopySid,'CopySid',\
       CreatePrivateObjectSecurity,'CreatePrivateObjectSecurity',\
       CreatePrivateObjectSecurityEx,'CreatePrivateObjectSecurityEx',\
       CreateProcessAsUserA,'CreateProcessAsUserA',\
       CreateProcessAsUserW,'CreateProcessAsUserW',\
       CreateRestrictedToken,'CreateRestrictedToken',\
       CreateServiceA,'CreateServiceA',\
       CreateServiceW,'CreateServiceW',\
       CryptAcquireContextA,'CryptAcquireContextA',\
       CryptAcquireContextW,'CryptAcquireContextW',\
       CryptContextAddRef,'CryptContextAddRef',\
       CryptCreateHash,'CryptCreateHash',\
       CryptDecrypt,'CryptDecrypt',\
       CryptDeriveKey,'CryptDeriveKey',\
       CryptDestroyHash,'CryptDestroyHash',\
       CryptDestroyKey,'CryptDestroyKey',\
       CryptDuplicateHash,'CryptDuplicateHash',\
       CryptDuplicateKey,'CryptDuplicateKey',\
       CryptEncrypt,'CryptEncrypt',\
       CryptEnumProviderTypesA,'CryptEnumProviderTypesA',\
       CryptEnumProviderTypesW,'CryptEnumProviderTypesW',\
       CryptEnumProvidersA,'CryptEnumProvidersA',\
       CryptEnumProvidersW,'CryptEnumProvidersW',\
       CryptExportKey,'CryptExportKey',\
       CryptGenKey,'CryptGenKey',\
       CryptGenRandom,'CryptGenRandom',\
       CryptGetDefaultProviderA,'CryptGetDefaultProviderA',\
       CryptGetDefaultProviderW,'CryptGetDefaultProviderW',\
       CryptGetHashParam,'CryptGetHashParam',\
       CryptGetKeyParam,'CryptGetKeyParam',\
       CryptGetProvParam,'CryptGetProvParam',\
       CryptGetUserKey,'CryptGetUserKey',\
       CryptHashData,'CryptHashData',\
       CryptHashSessionKey,'CryptHashSessionKey',\
       CryptImportKey,'CryptImportKey',\
       CryptReleaseContext,'CryptReleaseContext',\
       CryptSetHashParam,'CryptSetHashParam',\
       CryptSetKeyParam,'CryptSetKeyParam',\
       CryptSetProvParam,'CryptSetProvParam',\
       CryptSetProviderA,'CryptSetProviderA',\
       CryptSetProviderW,'CryptSetProviderW',\
       CryptSetProviderExA,'CryptSetProviderExA',\
       CryptSetProviderExW,'CryptSetProviderExW',\
       CryptSignHashA,'CryptSignHashA',\
       CryptSignHashW,'CryptSignHashW',\
       CryptVerifySignatureA,'CryptVerifySignatureA',\
       CryptVerifySignatureW,'CryptVerifySignatureW',\
       DecryptFileA,'DecryptFileA',\
       DecryptFileW,'DecryptFileW',\
       DeleteAce,'DeleteAce',\
       DeleteService,'DeleteService',\
       DeregisterEventSource,'DeregisterEventSource',\
       DestroyPrivateObjectSecurity,'DestroyPrivateObjectSecurity',\
       DuplicateToken,'DuplicateToken',\
       DuplicateTokenEx,'DuplicateTokenEx',\
       ElfBackupEventLogFileA,'ElfBackupEventLogFileA',\
       ElfBackupEventLogFileW,'ElfBackupEventLogFileW',\
       ElfChangeNotify,'ElfChangeNotify',\
       ElfClearEventLogFileA,'ElfClearEventLogFileA',\
       ElfClearEventLogFileW,'ElfClearEventLogFileW',\
       ElfCloseEventLog,'ElfCloseEventLog',\
       ElfDeregisterEventSource,'ElfDeregisterEventSource',\
       ElfNumberOfRecords,'ElfNumberOfRecords',\
       ElfOldestRecord,'ElfOldestRecord',\
       ElfOpenBackupEventLogA,'ElfOpenBackupEventLogA',\
       ElfOpenBackupEventLogW,'ElfOpenBackupEventLogW',\
       ElfOpenEventLogA,'ElfOpenEventLogA',\
       ElfOpenEventLogW,'ElfOpenEventLogW',\
       ElfReadEventLogA,'ElfReadEventLogA',\
       ElfReadEventLogW,'ElfReadEventLogW',\
       ElfRegisterEventSourceA,'ElfRegisterEventSourceA',\
       ElfRegisterEventSourceW,'ElfRegisterEventSourceW',\
       ElfReportEventA,'ElfReportEventA',\
       ElfReportEventW,'ElfReportEventW',\
       EncryptFileA,'EncryptFileA',\
       EncryptFileW,'EncryptFileW',\
       EnumDependentServicesA,'EnumDependentServicesA',\
       EnumDependentServicesW,'EnumDependentServicesW',\
       EnumServicesStatusA,'EnumServicesStatusA',\
       EnumServicesStatusW,'EnumServicesStatusW',\
       EqualPrefixSid,'EqualPrefixSid',\
       EqualSid,'EqualSid',\
       FindFirstFreeAce,'FindFirstFreeAce',\
       FreeSid,'FreeSid',\
       GetAccessPermissionsForObjectA,'GetAccessPermissionsForObjectA',\
       GetAccessPermissionsForObjectW,'GetAccessPermissionsForObjectW',\
       GetAce,'GetAce',\
       GetAclInformation,'GetAclInformation',\
       GetAuditedPermissionsFromAclA,'GetAuditedPermissionsFromAclA',\
       GetAuditedPermissionsFromAclW,'GetAuditedPermissionsFromAclW',\
       GetCurrentHwProfileA,'GetCurrentHwProfileA',\
       GetCurrentHwProfileW,'GetCurrentHwProfileW',\
       GetEffectiveRightsFromAclA,'GetEffectiveRightsFromAclA',\
       GetEffectiveRightsFromAclW,'GetEffectiveRightsFromAclW',\
       GetExplicitEntriesFromAclA,'GetExplicitEntriesFromAclA',\
       GetExplicitEntriesFromAclW,'GetExplicitEntriesFromAclW',\
       GetFileSecurityA,'GetFileSecurityA',\
       GetFileSecurityW,'GetFileSecurityW',\
       GetKernelObjectSecurity,'GetKernelObjectSecurity',\
       GetLengthSid,'GetLengthSid',\
       GetMultipleTrusteeA,'GetMultipleTrusteeA',\
       GetMultipleTrusteeW,'GetMultipleTrusteeW',\
       GetMultipleTrusteeOperationA,'GetMultipleTrusteeOperationA',\
       GetMultipleTrusteeOperationW,'GetMultipleTrusteeOperationW',\
       GetNamedSecurityInfoA,'GetNamedSecurityInfoA',\
       GetNamedSecurityInfoW,'GetNamedSecurityInfoW',\
       GetNamedSecurityInfoExA,'GetNamedSecurityInfoExA',\
       GetNamedSecurityInfoExW,'GetNamedSecurityInfoExW',\
       GetNumberOfEventLogRecords,'GetNumberOfEventLogRecords',\
       GetOldestEventLogRecord,'GetOldestEventLogRecord',\
       GetOverlappedAccessResults,'GetOverlappedAccessResults',\
       GetPrivateObjectSecurity,'GetPrivateObjectSecurity',\
       GetSecurityDescriptorControl,'GetSecurityDescriptorControl',\
       GetSecurityDescriptorDacl,'GetSecurityDescriptorDacl',\
       GetSecurityDescriptorGroup,'GetSecurityDescriptorGroup',\
       GetSecurityDescriptorLength,'GetSecurityDescriptorLength',\
       GetSecurityDescriptorOwner,'GetSecurityDescriptorOwner',\
       GetSecurityDescriptorSacl,'GetSecurityDescriptorSacl',\
       GetSecurityInfo,'GetSecurityInfo',\
       GetSecurityInfoExA,'GetSecurityInfoExA',\
       GetSecurityInfoExW,'GetSecurityInfoExW',\
       GetServiceDisplayNameA,'GetServiceDisplayNameA',\
       GetServiceDisplayNameW,'GetServiceDisplayNameW',\
       GetServiceKeyNameA,'GetServiceKeyNameA',\
       GetServiceKeyNameW,'GetServiceKeyNameW',\
       GetSidLengthRequiredA,'GetSidLengthRequiredA',\
       GetSidLengthRequiredW,'GetSidLengthRequiredW',\
       GetSidSubAuthority,'GetSidSubAuthority',\
       GetSidSubAuthorityCount,'GetSidSubAuthorityCount',\
       GetTokenInformation,'GetTokenInformation',\
       GetTrusteeNameA,'GetTrusteeNameA',\
       GetTrusteeNameW,'GetTrusteeNameW',\
       GetTrusteeTypeA,'GetTrusteeTypeA',\
       GetTrusteeTypeW,'GetTrusteeTypeW',\
       GetUserNameA,'GetUserNameA',\
       GetUserNameW,'GetUserNameW',\
       I_ScSetServiceBitsA,'I_ScSetServiceBitsA',\
       I_ScSetServiceBitsW,'I_ScSetServiceBitsW',\
       ImpersonateLoggedOnUser,'ImpersonateLoggedOnUser',\
       ImpersonateNamedPipeClient,'ImpersonateNamedPipeClient',\
       ImpersonateSelf,'ImpersonateSelf',\
       InitializeAcl,'InitializeAcl',\
       InitializeSecurityDescriptor,'InitializeSecurityDescriptor',\
       InitializeSid,'InitializeSid',\
       InitiateSystemShutdownA,'InitiateSystemShutdownA',\
       InitiateSystemShutdownW,'InitiateSystemShutdownW',\
       IsTextUnicode,'IsTextUnicode',\
       IsTokenRestricted,'IsTokenRestricted',\
       IsValidAcl,'IsValidAcl',\
       IsValidSecurityDescriptor,'IsValidSecurityDescriptor',\
       IsValidSid,'IsValidSid',\
       LockServiceDatabase,'LockServiceDatabase',\
       LogonUserA,'LogonUserA',\
       LogonUserW,'LogonUserW',\
       LookupAccountNameA,'LookupAccountNameA',\
       LookupAccountNameW,'LookupAccountNameW',\
       LookupAccountSidA,'LookupAccountSidA',\
       LookupAccountSidW,'LookupAccountSidW',\
       LookupPrivilegeDisplayNameA,'LookupPrivilegeDisplayNameA',\
       LookupPrivilegeDisplayNameW,'LookupPrivilegeDisplayNameW',\
       LookupPrivilegeNameA,'LookupPrivilegeNameA',\
       LookupPrivilegeNameW,'LookupPrivilegeNameW',\
       LookupPrivilegeValueA,'LookupPrivilegeValueA',\
       LookupPrivilegeValueW,'LookupPrivilegeValueW',\
       LookupSecurityDescriptorPartsA,'LookupSecurityDescriptorPartsA',\
       LookupSecurityDescriptorPartsW,'LookupSecurityDescriptorPartsW',\
       LsaAddAccountRights,'LsaAddAccountRights',\
       LsaAddPrivilegesToAccount,'LsaAddPrivilegesToAccount',\
       LsaClearAuditLog,'LsaClearAuditLog',\
       LsaClose,'LsaClose',\
       LsaCreateAccount,'LsaCreateAccount',\
       LsaCreateSecret,'LsaCreateSecret',\
       LsaCreateTrustedDomain,'LsaCreateTrustedDomain',\
       LsaCreateTrustedDomainEx,'LsaCreateTrustedDomainEx',\
       LsaDelete,'LsaDelete',\
       LsaDeleteTrustedDomain,'LsaDeleteTrustedDomain',\
       LsaEnumerateAccountRights,'LsaEnumerateAccountRights',\
       LsaEnumerateAccounts,'LsaEnumerateAccounts',\
       LsaEnumerateAccountsWithUserRight,'LsaEnumerateAccountsWithUserRight',\
       LsaEnumeratePrivileges,'LsaEnumeratePrivileges',\
       LsaEnumeratePrivilegesOfAccount,'LsaEnumeratePrivilegesOfAccount',\
       LsaEnumerateTrustedDomains,'LsaEnumerateTrustedDomains',\
       LsaEnumerateTrustedDomainsEx,'LsaEnumerateTrustedDomainsEx',\
       LsaFreeMemory,'LsaFreeMemory',\
       LsaGetQuotasForAccount,'LsaGetQuotasForAccount',\
       LsaGetSystemAccessAccount,'LsaGetSystemAccessAccount',\
       LsaGetUserName,'LsaGetUserName',\
       LsaICLookupNames,'LsaICLookupNames',\
       LsaICLookupSids,'LsaICLookupSids',\
       LsaIGetTrustedDomainAuthInfoBlobs,'LsaIGetTrustedDomainAuthInfoBlobs',\
       LsaISetTrustedDomainAuthInfoBlobs,'LsaISetTrustedDomainAuthInfoBlobs',\
       LsaLookupNames,'LsaLookupNames',\
       LsaLookupPrivilegeDisplayName,'LsaLookupPrivilegeDisplayName',\
       LsaLookupPrivilegeName,'LsaLookupPrivilegeName',\
       LsaLookupPrivilegeValue,'LsaLookupPrivilegeValue',\
       LsaLookupSids,'LsaLookupSids',\
       LsaNtStatusToWinError,'LsaNtStatusToWinError',\
       LsaOpenAccount,'LsaOpenAccount',\
       LsaOpenPolicy,'LsaOpenPolicy',\
       LsaOpenSecret,'LsaOpenSecret',\
       LsaOpenTrustedDomain,'LsaOpenTrustedDomain',\
       LsaQueryDomainInformationPolicy,'LsaQueryDomainInformationPolicy',\
       LsaQueryInfoTrustedDomain,'LsaQueryInfoTrustedDomain',\
       LsaQueryInformationPolicy,'LsaQueryInformationPolicy',\
       LsaQueryLocalInformationPolicy,'LsaQueryLocalInformationPolicy',\
       LsaQuerySecret,'LsaQuerySecret',\
       LsaQuerySecurityObject,'LsaQuerySecurityObject',\
       LsaQueryTrustedDomainInfo,'LsaQueryTrustedDomainInfo',\
       LsaQueryTrustedDomainInfoByName,'LsaQueryTrustedDomainInfoByName',\
       LsaRemoveAccountRights,'LsaRemoveAccountRights',\
       LsaRemovePrivilegesFromAccount,'LsaRemovePrivilegesFromAccount',\
       LsaRetrievePrivateData,'LsaRetrievePrivateData',\
       LsaSetDomainInformationPolicy,'LsaSetDomainInformationPolicy',\
       LsaSetInformationPolicy,'LsaSetInformationPolicy',\
       LsaSetInformationTrustedDomain,'LsaSetInformationTrustedDomain',\
       LsaSetLocalInformationPolicy,'LsaSetLocalInformationPolicy',\
       LsaSetQuotasForAccount,'LsaSetQuotasForAccount',\
       LsaSetSecret,'LsaSetSecret',\
       LsaSetSecurityObject,'LsaSetSecurityObject',\
       LsaSetSystemAccessAccount,'LsaSetSystemAccessAccount',\
       LsaSetTrustedDomainInfoByName,'LsaSetTrustedDomainInfoByName',\
       LsaSetTrustedDomainInformation,'LsaSetTrustedDomainInformation',\
       LsaStorePrivateData,'LsaStorePrivateData',\
       MakeAbsoluteSD,'MakeAbsoluteSD',\
       MakeSelfRelativeSD,'MakeSelfRelativeSD',\
       MapGenericMask,'MapGenericMask',\
       NotifyBootConfigStatus,'NotifyBootConfigStatus',\
       NotifyChangeEventLog,'NotifyChangeEventLog',\
       ObjectCloseAuditAlarmA,'ObjectCloseAuditAlarmA',\
       ObjectCloseAuditAlarmW,'ObjectCloseAuditAlarmW',\
       ObjectDeleteAuditAlarmA,'ObjectDeleteAuditAlarmA',\
       ObjectDeleteAuditAlarmW,'ObjectDeleteAuditAlarmW',\
       ObjectOpenAuditAlarmA,'ObjectOpenAuditAlarmA',\
       ObjectOpenAuditAlarmW,'ObjectOpenAuditAlarmW',\
       ObjectPrivilegeAuditAlarmA,'ObjectPrivilegeAuditAlarmA',\
       ObjectPrivilegeAuditAlarmW,'ObjectPrivilegeAuditAlarmW',\
       OpenBackupEventLogA,'OpenBackupEventLogA',\
       OpenBackupEventLogW,'OpenBackupEventLogW',\
       OpenEventLogA,'OpenEventLogA',\
       OpenEventLogW,'OpenEventLogW',\
       OpenProcessToken,'OpenProcessToken',\
       OpenRawA,'OpenRawA',\
       OpenRawW,'OpenRawW',\
       OpenSCManagerA,'OpenSCManagerA',\
       OpenSCManagerW,'OpenSCManagerW',\
       OpenServiceA,'OpenServiceA',\
       OpenServiceW,'OpenServiceW',\
       OpenThreadToken,'OpenThreadToken',\
       PrivilegeCheck,'PrivilegeCheck',\
       PrivilegedServiceAuditAlarmA,'PrivilegedServiceAuditAlarmA',\
       PrivilegedServiceAuditAlarmW,'PrivilegedServiceAuditAlarmW',\
       QueryRecoveryAgentsA,'QueryRecoveryAgentsA',\
       QueryRecoveryAgentsW,'QueryRecoveryAgentsW',\
       QueryServiceConfig2A,'QueryServiceConfig2A',\
       QueryServiceConfig2W,'QueryServiceConfig2W',\
       QueryServiceConfigA,'QueryServiceConfigA',\
       QueryServiceConfigW,'QueryServiceConfigW',\
       QueryServiceLockStatusA,'QueryServiceLockStatusA',\
       QueryServiceLockStatusW,'QueryServiceLockStatusW',\
       QueryServiceObjectSecurity,'QueryServiceObjectSecurity',\
       QueryServiceStatus,'QueryServiceStatus',\
       QueryWindows31FilesMigration,'QueryWindows31FilesMigration',\
       ReadEventLogA,'ReadEventLogA',\
       ReadEventLogW,'ReadEventLogW',\
       ReadRaw,'ReadRaw',\
       RegCloseKey,'RegCloseKey',\
       RegConnectRegistryA,'RegConnectRegistryA',\
       RegConnectRegistryW,'RegConnectRegistryW',\
       RegCreateKeyA,'RegCreateKeyA',\
       RegCreateKeyW,'RegCreateKeyW',\
       RegCreateKeyExA,'RegCreateKeyExA',\
       RegCreateKeyExW,'RegCreateKeyExW',\
       RegDeleteKeyA,'RegDeleteKeyA',\
       RegDeleteKeyW,'RegDeleteKeyW',\
       RegDeleteValueA,'RegDeleteValueA',\
       RegDeleteValueW,'RegDeleteValueW',\
       RegEnumKeyA,'RegEnumKeyA',\
       RegEnumKeyW,'RegEnumKeyW',\
       RegEnumKeyExA,'RegEnumKeyExA',\
       RegEnumKeyExW,'RegEnumKeyExW',\
       RegEnumValueA,'RegEnumValueA',\
       RegEnumValueW,'RegEnumValueW',\
       RegFlushKey,'RegFlushKey',\
       RegGetKeySecurity,'RegGetKeySecurity',\
       RegLoadKeyA,'RegLoadKeyA',\
       RegLoadKeyW,'RegLoadKeyW',\
       RegNotifyChangeKeyValue,'RegNotifyChangeKeyValue',\
       RegOpenKeyA,'RegOpenKeyA',\
       RegOpenKeyW,'RegOpenKeyW',\
       RegOpenKeyExA,'RegOpenKeyExA',\
       RegOpenKeyExW,'RegOpenKeyExW',\
       RegOverridePredefKey,'RegOverridePredefKey',\
       RegQueryInfoKeyA,'RegQueryInfoKeyA',\
       RegQueryInfoKeyW,'RegQueryInfoKeyW',\
       RegQueryMultipleValuesA,'RegQueryMultipleValuesA',\
       RegQueryMultipleValuesW,'RegQueryMultipleValuesW',\
       RegQueryValueA,'RegQueryValueA',\
       RegQueryValueW,'RegQueryValueW',\
       RegQueryValueExA,'RegQueryValueExA',\
       RegQueryValueExW,'RegQueryValueExW',\
       RegReplaceKeyA,'RegReplaceKeyA',\
       RegReplaceKeyW,'RegReplaceKeyW',\
       RegRestoreKeyA,'RegRestoreKeyA',\
       RegRestoreKeyW,'RegRestoreKeyW',\
       RegSaveKeyA,'RegSaveKeyA',\
       RegSaveKeyW,'RegSaveKeyW',\
       RegSetKeySecurity,'RegSetKeySecurity',\
       RegSetValueA,'RegSetValueA',\
       RegSetValueW,'RegSetValueW',\
       RegSetValueExA,'RegSetValueExA',\
       RegSetValueExW,'RegSetValueExW',\
       RegUnLoadKeyA,'RegUnLoadKeyA',\
       RegUnLoadKeyW,'RegUnLoadKeyW',\
       RegisterEventSourceA,'RegisterEventSourceA',\
       RegisterEventSourceW,'RegisterEventSourceW',\
       RegisterServiceCtrlHandlerA,'RegisterServiceCtrlHandlerA',\
       RegisterServiceCtrlHandlerW,'RegisterServiceCtrlHandlerW',\
       ReportEventA,'ReportEventA',\
       ReportEventW,'ReportEventW',\
       RevertToSelf,'RevertToSelf',\
       SetAclInformation,'SetAclInformation',\
       SetEntriesInAccessListA,'SetEntriesInAccessListA',\
       SetEntriesInAccessListW,'SetEntriesInAccessListW',\
       SetEntriesInAclA,'SetEntriesInAclA',\
       SetEntriesInAclW,'SetEntriesInAclW',\
       SetEntriesInAuditListA,'SetEntriesInAuditListA',\
       SetEntriesInAuditListW,'SetEntriesInAuditListW',\
       SetFileSecurityA,'SetFileSecurityA',\
       SetFileSecurityW,'SetFileSecurityW',\
       SetKernelObjectSecurity,'SetKernelObjectSecurity',\
       SetNamedSecurityInfoA,'SetNamedSecurityInfoA',\
       SetNamedSecurityInfoW,'SetNamedSecurityInfoW',\
       SetNamedSecurityInfoExA,'SetNamedSecurityInfoExA',\
       SetNamedSecurityInfoExW,'SetNamedSecurityInfoExW',\
       SetPrivateObjectSecurity,'SetPrivateObjectSecurity',\
       SetPrivateObjectSecurityEx,'SetPrivateObjectSecurityEx',\
       SetSecurityDescriptorControl,'SetSecurityDescriptorControl',\
       SetSecurityDescriptorDacl,'SetSecurityDescriptorDacl',\
       SetSecurityDescriptorGroup,'SetSecurityDescriptorGroup',\
       SetSecurityDescriptorOwner,'SetSecurityDescriptorOwner',\
       SetSecurityDescriptorSacl,'SetSecurityDescriptorSacl',\
       SetSecurityInfo,'SetSecurityInfo',\
       SetSecurityInfoExA,'SetSecurityInfoExA',\
       SetSecurityInfoExW,'SetSecurityInfoExW',\
       SetServiceBits,'SetServiceBits',\
       SetServiceObjectSecurity,'SetServiceObjectSecurity',\
       SetServiceStatus,'SetServiceStatus',\
       SetThreadToken,'SetThreadToken',\
       SetTokenInformation,'SetTokenInformation',\
       StartServiceA,'StartServiceA',\
       StartServiceW,'StartServiceW',\
       StartServiceCtrlDispatcherA,'StartServiceCtrlDispatcherA',\
       StartServiceCtrlDispatcherW,'StartServiceCtrlDispatcherW',\
       SynchronizeWindows31FilesAndWindowsNTRegistry,'SynchronizeWindows31FilesAndWindowsNTRegistry',\
       TrusteeAccessToObjectA,'TrusteeAccessToObjectA',\
       TrusteeAccessToObjectW,'TrusteeAccessToObjectW',\
       UnlockServiceDatabase,'UnlockServiceDatabase',\
       WriteRaw,'WriteRaw'

api AbortSystemShutdown,\
    AccessCheckAndAuditAlarm,\
    AccessCheckByTypeAndAuditAlarm,\
    AccessCheckByTypeResultListAndAuditAlarm,\
    BackupEventLog,\
    BuildExplicitAccessWithName,\
    BuildImpersonateExplicitAccessWithName,\
    BuildImpersonateTrustee,\
    BuildSecurityDescriptor,\
    BuildTrusteeWithName,\
    BuildTrusteeWithSid,\
    ChangeServiceConfig2,\
    ChangeServiceConfig,\
    ClearEventLog,\
    ConvertAccessToSecurityDescriptor,\
    ConvertSecurityDescriptorToAccess,\
    ConvertSecurityDescriptorToAccessNamed,\
    CreateProcessAsUser,\
    CreateService,\
    CryptAcquireContext,\
    CryptEnumProviderTypes,\
    CryptEnumProviders,\
    CryptGetDefaultProvider,\
    CryptSetProvider,\
    CryptSetProviderEx,\
    CryptSignHash,\
    CryptVerifySignature,\
    DecryptFile,\
    ElfBackupEventLogFile,\
    ElfClearEventLogFile,\
    ElfOpenBackupEventLog,\
    ElfOpenEventLog,\
    ElfReadEventLog,\
    ElfRegisterEventSource,\
    ElfReportEvent,\
    EncryptFile,\
    EnumDependentServices,\
    EnumServicesStatus,\
    GetAccessPermissionsForObject,\
    GetAuditedPermissionsFromAcl,\
    GetCurrentHwProfile,\
    GetEffectiveRightsFromAcl,\
    GetExplicitEntriesFromAcl,\
    GetFileSecurity,\
    GetMultipleTrustee,\
    GetMultipleTrusteeOperation,\
    GetNamedSecurityInfo,\
    GetNamedSecurityInfoEx,\
    GetSecurityInfoEx,\
    GetServiceDisplayName,\
    GetServiceKeyName,\
    GetSidLengthRequired,\
    GetTrusteeName,\
    GetTrusteeType,\
    GetUserName,\
    I_ScSetServiceBits,\
    InitiateSystemShutdown,\
    LogonUser,\
    LookupAccountName,\
    LookupAccountSid,\
    LookupPrivilegeDisplayName,\
    LookupPrivilegeName,\
    LookupPrivilegeValue,\
    LookupSecurityDescriptorParts,\
    ObjectCloseAuditAlarm,\
    ObjectDeleteAuditAlarm,\
    ObjectOpenAuditAlarm,\
    ObjectPrivilegeAuditAlarm,\
    OpenBackupEventLog,\
    OpenEventLog,\
    OpenRaw,\
    OpenSCManager,\
    OpenService,\
    PrivilegedServiceAuditAlarm,\
    QueryRecoveryAgents,\
    QueryServiceConfig2,\
    QueryServiceConfig,\
    QueryServiceLockStatus,\
    ReadEventLog,\
    RegConnectRegistry,\
    RegCreateKey,\
    RegCreateKeyEx,\
    RegDeleteKey,\
    RegDeleteValue,\
    RegEnumKey,\
    RegEnumKeyEx,\
    RegEnumValue,\
    RegLoadKey,\
    RegOpenKey,\
    RegOpenKeyEx,\
    RegQueryInfoKey,\
    RegQueryMultipleValues,\
    RegQueryValue,\
    RegQueryValueEx,\
    RegReplaceKey,\
    RegRestoreKey,\
    RegSaveKey,\
    RegSetValue,\
    RegSetValueEx,\
    RegUnLoadKey,\
    RegisterEventSource,\
    RegisterServiceCtrlHandler,\
    ReportEvent,\
    SetEntriesInAccessList,\
    SetEntriesInAcl,\
    SetEntriesInAuditList,\
    SetFileSecurity,\
    SetNamedSecurityInfo,\
    SetNamedSecurityInfoEx,\
    SetSecurityInfoEx,\
    StartService,\
    StartServiceCtrlDispatcher,\
    TrusteeAccessToObject
