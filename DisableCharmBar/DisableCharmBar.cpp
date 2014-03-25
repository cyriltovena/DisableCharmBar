// Il s'agit du fichier DLL principal.

#include "stdafx.h"

#include "DisableCharmBar.h"

bool DisableCharmbar(HWND hWnd)
{
	PROPVARIANT var;
	var.vt = VT_BOOL;
	var.boolVal = VARIANT_TRUE;
	// Get window properties
	IPropertyStore* pPropStore;
	IID_PPV_ARGS(&pPropStore);
	HRESULT hrReturnValue = SHGetPropertyStoreForWindow(hWnd, IID_PPV_ARGS(&pPropStore));
	// set  PKEY_EdgeGesture_DisableTouchWhenFullscreen property
	if (SUCCEEDED(hrReturnValue))
	{
		hrReturnValue = pPropStore->SetValue(PKEY_EdgeGesture_DisableTouchWhenFullscreen, var);
		pPropStore->Release();
	}
	return TRUE;
}