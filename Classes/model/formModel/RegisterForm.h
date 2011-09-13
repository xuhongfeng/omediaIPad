//
//  RegisterForm.h
//  omedia
//
//  Created by xu hongfeng on 11-9-13.
//  Copyright 2011 THU. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BaseFormModel.h"
#import "ProFormToData.h"
#import "ProValidateForm.h"

@interface RegisterForm : BaseFormModel <ProFormToData, ProValidateForm>{
	NSString* username;
	NSString* password;
	NSString* confirmPassword;
	NSString* email;
}

@property(nonatomic, retain) NSString* username;
@property(nonatomic, retain) NSString* password;
@property(nonatomic, retain) NSString* confirmPassword;
@property(nonatomic, retain) NSString* email;

@end
