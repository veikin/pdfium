// Copyright 2016 PDFium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Original code copyright 2014 Foxit Software Inc. http://www.foxitsoftware.com

#ifndef XFA_FXFA_PARSER_CXFA_SCRIPTDATA_H_
#define XFA_FXFA_PARSER_CXFA_SCRIPTDATA_H_

#include <stdint.h>

#include "core/fxcrt/fx_string.h"
#include "xfa/fxfa/parser/cxfa_data.h"

enum XFA_SCRIPTTYPE {
  XFA_SCRIPTTYPE_Formcalc = 0,
  XFA_SCRIPTTYPE_Javascript,
  XFA_SCRIPTTYPE_Unkown,
};

class CXFA_Node;

class CXFA_ScriptData : public CXFA_Data {
 public:
  explicit CXFA_ScriptData(CXFA_Node* pNode);

  XFA_SCRIPTTYPE GetContentType();
  int32_t GetRunAt();
  void GetExpression(WideString& wsExpression);
};

#endif  // XFA_FXFA_PARSER_CXFA_SCRIPTDATA_H_