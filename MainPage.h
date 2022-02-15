#pragma once
//#include "../Hash Table/Hash Table/HashTable.h"
#include "../LinkedList/Linked List/Linked List/LinkedList.h";
#include "../LinkedList/Linked List/Linked List/Node.h";
#include "../Hash Table/Hash Table/Node.h";
#include "../Hash Table/Hash Table/HashTable.h";
#include <stdlib.h>
#include <string>
namespace GUIApplication {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainPage
	/// </summary>
	public ref class MainPage : public System::Windows::Forms::Form
	{
	public:
		MainPage(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ cLinkedList;
	private: System::Windows::Forms::Button^ addHash;
	protected:

	private: System::Windows::Forms::Button^ addList;



	private: System::Windows::Forms::Button^ cHashTable;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ showHash;



	private: System::Windows::Forms::Button^ showList;


	private:String^ str;


	private:HashTable<int, int>* hashTable1;
	private:LinkedList* list1;
	private: System::Windows::Forms::TextBox^ outputbox;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ statusVal;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->cLinkedList = (gcnew System::Windows::Forms::Button());
			this->addHash = (gcnew System::Windows::Forms::Button());
			this->addList = (gcnew System::Windows::Forms::Button());
			this->cHashTable = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->showHash = (gcnew System::Windows::Forms::Button());
			this->showList = (gcnew System::Windows::Forms::Button());
			this->outputbox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->statusVal = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// cLinkedList
			// 
			this->cLinkedList->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cLinkedList->Location = System::Drawing::Point(21, 134);
			this->cLinkedList->Name = L"cLinkedList";
			this->cLinkedList->Size = System::Drawing::Size(155, 31);
			this->cLinkedList->TabIndex = 0;
			this->cLinkedList->Text = L"Create Linked List";
			this->cLinkedList->UseVisualStyleBackColor = true;
			this->cLinkedList->Click += gcnew System::EventHandler(this, &MainPage::cLinkedList_Click);
			// 
			// addHash
			// 
			this->addHash->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addHash->Location = System::Drawing::Point(247, 199);
			this->addHash->Name = L"addHash";
			this->addHash->Size = System::Drawing::Size(140, 31);
			this->addHash->TabIndex = 1;
			this->addHash->Text = L"Add Elements";
			this->addHash->UseVisualStyleBackColor = true;
			this->addHash->Click += gcnew System::EventHandler(this, &MainPage::addHash_Click);
			// 
			// addList
			// 
			this->addList->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addList->Location = System::Drawing::Point(247, 134);
			this->addList->Name = L"addList";
			this->addList->Size = System::Drawing::Size(140, 31);
			this->addList->TabIndex = 2;
			this->addList->Text = L"Add Elements";
			this->addList->UseVisualStyleBackColor = true;
			this->addList->Click += gcnew System::EventHandler(this, &MainPage::addList_Click);
			// 
			// cHashTable
			// 
			this->cHashTable->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cHashTable->Location = System::Drawing::Point(21, 199);
			this->cHashTable->Name = L"cHashTable";
			this->cHashTable->Size = System::Drawing::Size(155, 31);
			this->cHashTable->TabIndex = 4;
			this->cHashTable->Text = L"Create HashTable";
			this->cHashTable->UseVisualStyleBackColor = true;
			this->cHashTable->Click += gcnew System::EventHandler(this, &MainPage::cHashTable_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(227, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(188, 46);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Welcome";
			this->label1->Click += gcnew System::EventHandler(this, &MainPage::label1_Click);
			// 
			// showHash
			// 
			this->showHash->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->showHash->Location = System::Drawing::Point(469, 199);
			this->showHash->Name = L"showHash";
			this->showHash->Size = System::Drawing::Size(144, 31);
			this->showHash->TabIndex = 6;
			this->showHash->Text = L"Show HashTable";
			this->showHash->UseVisualStyleBackColor = true;
			this->showHash->Click += gcnew System::EventHandler(this, &MainPage::showHash_Click);
			// 
			// showList
			// 
			this->showList->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->showList->Location = System::Drawing::Point(469, 134);
			this->showList->Name = L"showList";
			this->showList->Size = System::Drawing::Size(144, 31);
			this->showList->TabIndex = 8;
			this->showList->Text = L"Show Linked List";
			this->showList->UseVisualStyleBackColor = true;
			this->showList->Click += gcnew System::EventHandler(this, &MainPage::showList_Click);
			// 
			// outputbox
			// 
			this->outputbox->Location = System::Drawing::Point(21, 332);
			this->outputbox->Multiline = true;
			this->outputbox->Name = L"outputbox";
			this->outputbox->Size = System::Drawing::Size(598, 119);
			this->outputbox->TabIndex = 10;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::DimGray;
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(27, 316);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(68, 13);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Output panel";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(231, 298);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(56, 20);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Status";
			// 
			// statusVal
			// 
			this->statusVal->AutoSize = true;
			this->statusVal->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->statusVal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->statusVal->Location = System::Drawing::Point(293, 298);
			this->statusVal->Name = L"statusVal";
			this->statusVal->Size = System::Drawing::Size(0, 20);
			this->statusVal->TabIndex = 13;
			// 
			// MainPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(672, 463);
			this->Controls->Add(this->statusVal);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->outputbox);
			this->Controls->Add(this->showList);
			this->Controls->Add(this->showHash);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->cHashTable);
			this->Controls->Add(this->addList);
			this->Controls->Add(this->addHash);
			this->Controls->Add(this->cLinkedList);
			this->Name = L"MainPage";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void cHashTable_Click(System::Object^ sender, System::EventArgs^ e) {
	this->hashTable1= new HashTable<int, int>(100);
	this->statusVal->Text = "Hash table Created";
	this->str = "";
	

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void cLinkedList_Click(System::Object^ sender, System::EventArgs^ e) {
	this->list1 = new LinkedList();
	this->str = "";
	this->statusVal->Text = "Linked List Created";
}
private: System::Void addList_Click(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < 100; i++)
	{
		int num = (rand() % 1000) + 1;
		Node* n1=new Node(num);
		this->list1->addNodeAtEnd(n1);
	}
	this->statusVal->Text = "Elements Inserted in LinkedList";
}
private: System::Void showList_Click(System::Object^ sender, System::EventArgs^ e) {
	this->statusVal->Text = "Linked List showed in output Panel";
	Node* ptr = this->list1->gethead();
	while (ptr!=NULL)
	{
		this->str = this->str + ptr->getData()+" -> " ;
		ptr = ptr->next;
	}
	this->outputbox->Text = this->str;
}
private: System::Void addHash_Click(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < 100; i++)
	{
		int key = (rand() % 1000) + 1;
		int value = (rand() % 1000) + 1;
		HashNode<int, int>* ptr = new HashNode<int, int>(key, value);
		hashTable1->insertByChaining(ptr);

	}
	this->statusVal->Text = "Elements Inserted in HashTable";
}
private: System::Void showHash_Click(System::Object^ sender, System::EventArgs^ e) {
	
	for (int i = 0; i < 100; i++) {
		cout << "**********At Index " << (i + 1) << " ************" << endl;
		if (this->hashTable1->table[i] != NULL) {
			this->str = this->str + "Key : " + this->hashTable1->table[i]->getKey() + " Data : " + this->hashTable1->table[i]->getData()+"\n";
			HashNode<int,int>* ptr = this->hashTable1->table[i];
			cout << "In chainig :: ";
			while (ptr->chainNext != nullptr) {
				this->str = this->str + "Key : " + ptr->getKey() + " Data : " + ptr->getData() + " --> ";
				ptr = ptr->chainNext;
			}
			this->str = this->str + " End\n";
		}
		else
			this->str=this->str+ "<--No Data Present-->";
	}
	this->outputbox->Text = this->str;
	this->statusVal->Text = "HashTable Showed";
}
};
}
