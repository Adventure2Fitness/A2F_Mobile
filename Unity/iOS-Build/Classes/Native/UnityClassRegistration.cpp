struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

}

void RegisterAllClasses()
{
	//Total: 57 classes
	//0. AssetBundle
	void RegisterClass_AssetBundle();
	RegisterClass_AssetBundle();

	//1. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//4. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//5. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//6. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//7. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//8. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//9. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//10. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//11. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//12. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//13. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//14. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//15. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//16. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//17. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//18. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//19. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//20. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//21. MeshCollider
	void RegisterClass_MeshCollider();
	RegisterClass_MeshCollider();

	//22. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//23. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//24. WebCamTexture
	void RegisterClass_WebCamTexture();
	RegisterClass_WebCamTexture();

	//25. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//26. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//27. BoxCollider
	void RegisterClass_BoxCollider();
	RegisterClass_BoxCollider();

	//28. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//29. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//30. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//31. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//32. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//33. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//34. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//35. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//36. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//37. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//38. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//39. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//40. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//41. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//42. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//43. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//44. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//45. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//46. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//47. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//48. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//49. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//50. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//51. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//52. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//53. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//54. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//55. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//56. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
