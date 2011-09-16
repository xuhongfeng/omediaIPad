//
//  LoginForm.m
//  omedia
//
//  Created by xu hongfeng on 11-9-13.
//  Copyright 2011 THU. All rights reserved.
//

#import "LoginForm.h"
#import "Account.h"

@implementation LoginForm

-(BaseDataModel*) toDataModel {
	Account* account = [[Account alloc]init];
	account.username = self.username;
	account.password = self.password;
	[account autorelease];
	return account;
}

-(void) dealloc {
	[username release];
	[password release];
	[super dealloc];
}

-(BOOL) validate {
	//TODO
	return NO;
}

@synthesize username;
@synthesize password;

@end
