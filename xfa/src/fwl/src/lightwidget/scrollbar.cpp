// Copyright 2014 PDFium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Original code copyright 2014 Foxit Software Inc. http://www.foxitsoftware.com

#include "../../../foxitlib.h"
CFWL_ScrollBar* CFWL_ScrollBar::Create() {
  return new CFWL_ScrollBar;
}
FWL_ERR CFWL_ScrollBar::Initialize(const CFWL_WidgetProperties* pProperties) {
  _FWL_RETURN_VALUE_IF_FAIL(!m_pIface, FWL_ERR_Indefinite);
  if (pProperties) {
    *m_pProperties = *pProperties;
  }
  m_pIface = IFWL_ScrollBar::Create();
  FWL_ERR ret =
      ((IFWL_ScrollBar*)m_pIface)
          ->Initialize(m_pProperties->MakeWidgetImpProperties(nullptr),
                       nullptr);
  if (ret == FWL_ERR_Succeeded) {
    CFWL_Widget::Initialize();
  }
  return ret;
}
FX_BOOL CFWL_ScrollBar::IsVertical() {
  _FWL_RETURN_VALUE_IF_FAIL(m_pIface, FALSE);
  return ((IFWL_ScrollBar*)m_pIface)->IsVertical();
}
FWL_ERR CFWL_ScrollBar::GetRange(FX_FLOAT& fMin, FX_FLOAT& fMax) {
  _FWL_RETURN_VALUE_IF_FAIL(m_pIface, FWL_ERR_Indefinite);
  return ((IFWL_ScrollBar*)m_pIface)->GetRange(fMin, fMax);
}
FWL_ERR CFWL_ScrollBar::SetRange(FX_FLOAT fMin, FX_FLOAT fMax) {
  _FWL_RETURN_VALUE_IF_FAIL(m_pIface, FWL_ERR_Indefinite);
  return ((IFWL_ScrollBar*)m_pIface)->SetRange(fMin, fMax);
}
FX_FLOAT CFWL_ScrollBar::GetPageSize() {
  _FWL_RETURN_VALUE_IF_FAIL(m_pIface, 0);
  return ((IFWL_ScrollBar*)m_pIface)->GetPageSize();
}
FWL_ERR CFWL_ScrollBar::SetPageSize(FX_FLOAT fPageSize) {
  _FWL_RETURN_VALUE_IF_FAIL(m_pIface, FWL_ERR_Indefinite);
  return ((IFWL_ScrollBar*)m_pIface)->SetPageSize(fPageSize);
}
FX_FLOAT CFWL_ScrollBar::GetStepSize() {
  _FWL_RETURN_VALUE_IF_FAIL(m_pIface, 0);
  return ((IFWL_ScrollBar*)m_pIface)->GetStepSize();
}
FWL_ERR CFWL_ScrollBar::SetStepSize(FX_FLOAT fStepSize) {
  _FWL_RETURN_VALUE_IF_FAIL(m_pIface, FWL_ERR_Indefinite);
  return ((IFWL_ScrollBar*)m_pIface)->SetStepSize(fStepSize);
}
FX_FLOAT CFWL_ScrollBar::GetPos() {
  _FWL_RETURN_VALUE_IF_FAIL(m_pIface, -1);
  return ((IFWL_ScrollBar*)m_pIface)->GetPos();
}
FWL_ERR CFWL_ScrollBar::SetPos(FX_FLOAT fPos) {
  _FWL_RETURN_VALUE_IF_FAIL(m_pIface, FWL_ERR_Indefinite);
  return ((IFWL_ScrollBar*)m_pIface)->SetPos(fPos);
}
FX_FLOAT CFWL_ScrollBar::GetTrackPos() {
  _FWL_RETURN_VALUE_IF_FAIL(m_pIface, -1);
  return ((IFWL_ScrollBar*)m_pIface)->GetTrackPos();
}
FWL_ERR CFWL_ScrollBar::SetTrackPos(FX_FLOAT fTrackPos) {
  _FWL_RETURN_VALUE_IF_FAIL(m_pIface, FWL_ERR_Indefinite);
  return ((IFWL_ScrollBar*)m_pIface)->SetTrackPos(fTrackPos);
}
FX_BOOL CFWL_ScrollBar::DoScroll(FX_DWORD dwCode, FX_FLOAT fPos) {
  _FWL_RETURN_VALUE_IF_FAIL(m_pIface, FALSE);
  return ((IFWL_ScrollBar*)m_pIface)->DoScroll(dwCode, fPos);
}
CFWL_ScrollBar::CFWL_ScrollBar() {}
CFWL_ScrollBar::~CFWL_ScrollBar() {}
